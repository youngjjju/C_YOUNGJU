#include <string>
#include <vector>

using namespace std;

int answer = 0;

void dfs(vector<vector<int>> &computers, vector<int> &visit, int idx){
    for(int i=0; i<computers[idx].size(); i++){
        if(computers[idx][i] && i != idx && !visit[i]){
            visit[i] = 1;
            dfs(computers, visit, i);
        } 
    }
}

int solution(int n, vector<vector<int>> computers) {
    
    vector<int> visit(n, 0);
    
    for(int j=0; j<computers.size(); j++){
        
        if(!visit[j]){
            dfs(computers, visit, j);
            answer++;
        }
        
    }
    return answer;
}