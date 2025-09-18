#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> routes) {
    int answer = 0;
    
    sort(routes.begin(), routes.end(), [](vector<int>a, vector<int> b) {
        return a[1] < b[1]; 
    });
    
    int cam = -30001;
    
    for(vector<int> a : routes){
        
        if(cam < a[0]){
            cam = a[1];
            answer ++;
        }
        
    }
    
    
    return answer;
}