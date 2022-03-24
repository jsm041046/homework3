#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **x; //int형 이중 포인터 x를 선언한다

    printf("sizeof(x) = %lu\n", sizeof(x)); //이중 포인터 x가 가지는 메모리 용량을 출력한다
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //이중 포인터 x의 참조값이 가지는 메모리 용량을 출력한다
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //이중 포인터 x의 이중 참조값이 가지는 메모리 용량을 출력한다
}

/*
요약 : 이중 포인터와 해당 이중 포인터를 참조해서 나온 포인터, 두번 참조해서 나온 int형까지의 메모리 용량을 확인하는 간단한 프로그램이다.
이를 통해 포인터와 이중포인터 또한 4바이트의 메모리 용량을 가짐을 알 수 있다.
*/