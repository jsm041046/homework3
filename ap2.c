#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5]; //int형 5개를 가진 배열 list 선언
    int *plist[5]; //int형 포인터 배열 plist 5개 선언

    list[0] = 10; //list[0]에 10 대입
    list[1] = 11; //list[1]에 11 대입

    plist[0] = (int*)malloc(sizeof(int)); //int크기만큼(4바이트)의 주소를 할당 한 후 해당 주소 위치를 plist[0]에게 전달

    printf("list[0] \t= %d\n", list[0]); //list[0]의 값 출력
    printf("address of list \t= %p\n", list); //list 배열 이름이 가르키는 주소 출력
    printf("address of list[0] \t= %p\n", &list[0]); //list[0]의 값을 저장한 메모리 주소를 출력
    printf("address of list + 0 \t= %p\n", list+0); //list 배열 이름이 가르키는 주소에서 int형 변수의 메모리 크기의 0배만큼 이동한 위치의 주소 출력
    printf("address of list + 1 \t= %p\n", list+1); //list 배열 이름이 가르키는 주소에서 int형 변수의 메모리 크기의 1배만큼 이동한 위치의 주소 출력
    printf("address of list + 2 \t= %p\n", list+2); //list 배열 이름이 가르키는 주소에서 int형 변수의 메모리 크기의 2배만큼 이동한 위치의 주소 출력
    printf("address of list + 3 \t= %p\n", list+3); //list 배열 이름이 가르키는 주소에서 int형 변수의 메모리 크기의 3배만큼 이동한 위치의 주소 출력
    printf("address of list + 4 \t= %p\n", list+4); //list 배열 이름이 가르키는 주소에서 int형 변수의 메모리 크기의 4배만큼 이동한 위치의 주소 출력
    printf("address of list[4] \t= %p\n", &list[4]); //list[4]의 값을 저장한 메모리 주소를 출력

    free(plist[0]); //동적할당된 plist[0]위치의 할당을 해제
}
//요약 : ap1.c에서 파악한 내용 중 정적할당된 배열의 각 변수가 연속적인 주소값을 가진다는 것을 확실히 확인하는 프로그램이다