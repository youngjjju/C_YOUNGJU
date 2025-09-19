#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(int N, int number) {
    int answer = 0;
    vector<set<int>> N_num(9);
    int cat = N;
    for(int i=1; i<9; i++){
        N_num[i].insert(cat);
        cat = cat * 10 + N;
    }
    
    for(int i=1; i<9; i++){ // i개 + j개 = N개 
        
        for(int j=1; j<i; j++){
            
            for(int a : N_num[j]){
                
                for(int b : N_num[i-j]){
                    
                    N_num[i].insert(a+b);
                    N_num[i].insert(a-b);
                    N_num[i].insert(a*b);
                    if(b!=0) N_num[i].insert(a/b);
                    
                }
                
            }
            
            
        }
        
        if(N_num[i].count(number)){
            return i;
        }
        
    }
    
    return -1;
}