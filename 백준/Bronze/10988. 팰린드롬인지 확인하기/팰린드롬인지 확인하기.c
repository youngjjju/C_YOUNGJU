#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    char arr[100];

    scanf("%s", arr);
    int howlong = strlen(arr);

    if (howlong % 2 == 1) {
        int middle = howlong / 2;
        int i;
        int* firsthalf = (int*)malloc(sizeof(int) * middle);
        int* secondhalf = (int*)malloc(sizeof(int) * middle);
        for (i = 0; i < middle; i++) {
            firsthalf[i] = arr[i];
        }
        for (i = 0; i < middle; i++) {
            secondhalf[i] = arr[howlong - i-1];
        }
        int count = 0;
        for (i = 0; i < middle; i++) {
            if (firsthalf[i] == secondhalf[i]) {
                count++;
            }
        }
        if (count == middle) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
    else {

        int middle = howlong / 2;
        int i;
        int* firsthalf = (int*)malloc(sizeof(int) * middle);
        int* secondhalf = (int*)malloc(sizeof(int) * middle);
        for (i = 0; i < middle; i++) {
            firsthalf[i] = arr[i];
        }
        for (i = 0; i < middle; i++) {
            secondhalf[i] = arr[howlong - i - 1];
        }
        int count = 0;
        for (i = 0; i < middle; i++) {
            if (firsthalf[i] == secondhalf[i]) {
                count++;
            }
        }
        if (count == middle) {
            printf("1");
        }
        else {
            printf("0");
        }
    }

}
// 5번째 => 9개 출력 4번째 7개 출력