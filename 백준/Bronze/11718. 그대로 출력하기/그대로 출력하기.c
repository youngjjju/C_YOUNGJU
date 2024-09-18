#include <stdio.h>

int main() {
    char sentences[101];

    // fgets를 사용하여 입력을 받는데, EOF를 만나면 종료
    while (fgets(sentences, sizeof(sentences), stdin) != NULL) {
        // 입력받은 문장을 출력
        printf("%s", sentences);
    }

    return 0;
}
