#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'M';  //이 예제에서 검사할 문자
    printf("문자: %c\n", ch);

    printf("알파벳 여부: %s\n", isalpha(ch) ? "예" : "아니요"); //ch가 알파벳(A-Z, a-z)인지 확인

    printf("대문자 여부: %s\n", isupper(ch) ? "예" : "아니요"); //ch가 알파벳 대문자(A-Z)인지 확인

    printf("소문자 여부: %s\n", islower(ch) ? "예" : "아니요"); //ch가 알파벳 소문자(a-z)인지 확인

    printf("숫자 여부: %s\n", isdigit(ch) ? "예" : "아니요"); //ch가 숫자(0-9)인지 확인

    printf("알파벳 또는 숫자 여부: %s\n", isalnum(ch) ? "예" : "아니요"); //ch가 알파벳 또는 숫자인지 확인

    printf("16진수 숫자 여부 %s\n", isxdigit(ch) ? "예" : "아니요"); //ch가 16진수 숫자(0-9, A-F, a-f)에 해당하는지 확인

    printf("구두점 문자 여부 %s\n", ispunct(ch) ? "예" : "아니요"); //ch가 구두점 문자인지 확인

    printf("인쇄 가능 문자 여부 %s\n", isprint(ch) ? "예" : "아니요"); //ch가 프린터블문자인지 확인

    printf("제어 문자 여부 %s\n", iscntrl(ch) ? "예" : "아니요"); //ch가 제어문자인지 확인

    printf("아스키 문자 여부 %s\n", isascii(ch) ? "예" : "아니요"); //ch가 아스키 문자집합에 포함되는지 확인

    return 0;
}