#include <stdio.h>

int main() {
    int T, N, num;
    
    scanf("%d", &T);


    for (int t = 0; t < T; t++) {

        scanf("%d", &N);
        scanf("%d", &num);
        int min = num, max = num;


        for (int i = 1; i < N; i++) {
            scanf("%d", &num);
            if (num < min) min = num;
            if (num > max) max = num;
        }


        printf("%d %d\n", min, max);
    }

    return 0;
}
