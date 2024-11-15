#include <stdio.h>

/*
getchar
putchar
fgetc
fputc
gets
fgets
puts
fputs
=> f가 붙으면 stream 지정을 해줘야함. stdin이 키보드, stdout이 모니터
=> gets보다는 fgets을 많이쓴다. 이유는 fgets은 할당 사이즈를 지정해줘서 저장공간보다 큰 입력을 방지하기 때문이다. fgets(str, sizeof(str), stdin)과 같이 쓴다.
*/

int main() {
    int ch1, ch2;  // EOF의 경우를 생각해서 getchar와 fgetc는 int형 입력

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

    char str[7];
    gets(str);
    fgets(str, sizeof(str), stdin);   // fgets는 개행문자(\n, \t, 공백 등)도 저장하므로, 엔터를 눌렀을 때 끝나지만 마지막에 \n를 저장한다. 
    
    puts(str);                        // puts는 자동으로 개행문자를 포함해서 다음줄로 개행이 이뤄짐
    fputs(str, stdin);                // fputs는 개행이 없어서 직접 \n 해줘야함
    return 0;
}
