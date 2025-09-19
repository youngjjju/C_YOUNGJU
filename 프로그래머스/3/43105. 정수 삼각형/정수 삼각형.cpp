#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    int size = triangle.size();
    
    for(int i=1; i<size; i++){
        
        for(int j=0; j<=i; j++){
            
            if(j==0){
                triangle[i][j] += triangle[i-1][0];
                continue;
            }
            
            if(j==i){
                triangle[i][j] += triangle[i-1][j-1];
                continue;
            }
            
            triangle[i][j] += max(triangle[i-1][j-1], triangle[i-1][j]);
            
        }
        
    }
    
    
    return *max_element(triangle[size-1].begin(), triangle[size-1].end());
}