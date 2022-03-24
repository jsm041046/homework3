#include <stdio.h>

struct student { //구조체 student 정의
    char lastName[13]; //char(1바이트)형 13개를 소유한 배열 lastName 선언
    int studentId; //int형 studentId 선언
    short grade; //short형 grade 선언
};

int main()
{

    struct student pst; //구조체 student형태를 가진 변수 pst 선언

    printf("size of student = %ld\n", sizeof(struct student)); //student형태가 차지하는 메모리 크기 출력
    printf("size of int = %ld\n", sizeof(int)); //int형이 차지하는 메모리 크기 출력
    printf("size of short = %ld\n", sizeof(short)); //short형이 차지하는 메모리 크기 출력

    return 0;
}

/*
요약 : 해당 프로그램의 결과를 보면 student 내부의 모든 변수의 크기를 합치는 것보다 student 구조체가 가지는 메모리 용량이 더 큰 것을 알 수 있는데,
이는 시스템의 편의에 따라 일정 단위의 메모리로 나누고 남는 부분을 채워넣는 padding에 의한 현상인 것을 파악할 수 있으며, 그러기 위해 만들어진 프로그램이다.
*/