#include <stdio.h>

int main() {
    int ch1, ch2;
  
    // getchar: 키보드 입력에서 한 문자를 읽어온다.
    ch1 = getchar(); 
    // 엔터를 누르면 개행문자가 ch2에 입력된다. 따라서, 개행문자를 소모시키는 코드가 필요하다.
    int enter = getchar();
    // fgetc: 지정한 스트림에서 한 문자를 읽어온다. 여기서는 stdin을 사용하므로 getchar와 동일한 동작.
    ch2 = fgetc(stdin);  

    // putchar: 출력 스트림(콘솔)에 한 문자를 출력한다.
    putchar(ch1);  // ch1에서 읽은 문자 출력

    // fputc: 지정한 스트림에 한 문자를 출력한다. 여기서는 stdout(콘솔)을 사용하여 출력.
    fputc(ch2, stdout);  // ch2에서 읽은 문자 출력

    return 0;
}
