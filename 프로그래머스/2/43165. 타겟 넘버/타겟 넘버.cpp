#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    int size = 1 << numbers.size();
    
    // i의 비트로 -와 +를 측정 
    // 0이면 -, 1이면 +이다. 
    // EX ) 00000이면 모두 -, 11111이면 모두 +
    
    for(int i=0; i<size; i++){
        
        int total = 0;
        
        for(int j=0; j<numbers.size(); j++){
            
            int mask = 1 << j;
            if( mask & i ){
                total += numbers[j];
            }
            else{
                total -= numbers[j];
            }
            
        }
        
        if (total == target) {
            answer ++;
        }
        
    }
    
    return answer;
}