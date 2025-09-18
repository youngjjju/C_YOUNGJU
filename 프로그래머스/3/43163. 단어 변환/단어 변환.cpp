#include <string>
#include <vector>
#include <deque>
#include <iostream>
#include <unordered_map>

using namespace std;

int compare(string A, string B){
    int same = 0; int diff = 0;
    for(int i=0; i<A.size(); i++){
        if(A[i]==B[i]) same ++;
        else diff ++;
    }
    if(diff == 1) return 1;
    else return 0;
}

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    deque<string> dq;
    dq.push_back(begin);
    unordered_map<string, int> visit;
    
    visit[begin] = 0;
    
    for(int i=0; i<words.size(); i++){
        visit[words[i]] = 0;
    }
    
    int mark = 0;
    int count = 1;
    
    while(!dq.empty()){
        
        string now = dq.front();
        dq.pop_front();
        
        for(int i=0; i<words.size(); i++){
            if(!visit[words[i]]&& compare(now, words[i])){
                dq.push_back(words[i]);
                cout<<words[i]<<endl;
                visit[words[i]] = visit[now] + 1;
                if(words[i] == target){
                    mark = 1;
                    answer = visit[words[i]];
                    break;
                }
            }
        }
    }
    
    if(mark){
        return answer;
    }
    else return 0;
}