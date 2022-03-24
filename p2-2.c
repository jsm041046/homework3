#include <stdio.h>

void print1 (int *ptr, int rows); //프로시저 print1 선언

int main()
{
    int one[] = {0, 1, 2, 3, 4}; //int형 5개를 가진 one 배열 선언 후 각각 인덱스에 0, 1, 2, 3, 4로 초기화

    printf("one = %p\n", one); //one 배열 이름이 가르키는 주소값 출력
    printf("&one = %p\n", &one); //one 배열 이름이 가르키는 주소값을 저장하는 메모리 위치 출력
    printf("&one[0] = %p\n", &one[0]); //one[0]의 값을 저장하는 메모리의 위치를 출력
    printf("\n"); //가시성을 위한 개행

    print1(&one[0], 5); //one[0]의 값을 담고있는 주소값과 5를 매개변수로 프로시저 print1을 호출

    return 0;
}

void print1 (int *ptr, int rows) //프로시저 print1 정의, 매개변수는 int형 포인터 ptr과 int형 rows
{

    int i; //int형 i 선언
    printf ("Address \t Contents\n");//안내문 출력
    for (i = 0; i < rows; i++) //i를 0에서 rows까지 증가시키며, 해당 블럭 내의 명령을 실행
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); //ptr에 int형 메모리 크기의 i배 만큼을 더한 주소값을 출력 및 해당 주소값의 참조를 출력
    printf("\n"); //가시성을 위한 개행
}

//요약 : 프로시저print1의 매개변수로 배열의 이름을 포인터로 전달하고 각각이 가르키는 주소값을 출력함으로써 배열의 이름과 포인터가 서로 일맥상통하는 개념이라는 것을 보이는 프로그램이다.