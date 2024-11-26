#include <stdio.h>
#include <stdlib.h>

int main() {
    int T,k;
    scanf("%d", &T);
    for (k = 0; k < T; k++) {
        int i, j, length;
        scanf("%d", &length);
        getchar();

        char* word = (char*)malloc(sizeof(char) * length);
        char* dictionary_word = (char*)malloc(sizeof(char) * length);

        for (i = 0; i < length; i++) {
            word[i] = getchar();
            getchar();
        }

        dictionary_word[0] = word[0];

        for (i = 1; i < length; i++) {
            if (dictionary_word[0] < word[i]) {
                dictionary_word[i] = word[i];
            }
            else if (dictionary_word[0] >= word[i]) {
                for (j = i-1; j >= 0; j--) {
                    dictionary_word[j + 1] = dictionary_word[j];
                }
                dictionary_word[0] = word[i];
            }
        }
        for (i = 0; i < length; i++) {
            printf("%c", dictionary_word[i]);
        }
        printf("\n");
    }
}
