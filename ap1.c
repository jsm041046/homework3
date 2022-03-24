#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5]; //int형 5개를 가진 배열 list 선언
    int *plist[5] = {NULL,}; //NULL로 초기화 된 int형 포인터 배열 plist 5개 선언

    plist[0] = (int*)malloc(sizeof(int)); //int크기만큼(4바이트)의 주소를 할당 한 후 해당 주소 위치를 plist[0]에게 전달

    list[0] = 1; //list[0]에 1을 대입
    list[1] = 100; //list[0]에 100을 대입
    
    *plist[0] = 200; //plist[0]의 주소값을 참조하여 200 대입

    printf("value of list[0] = %d\n",list[0]); //list[0]의 값을 출력
    printf("address of list[0]          = %p\n",&list[0]); //list[0]의 메모리 주소를 출력
    printf("value of list               = %p\n",list); //list배열 이름이 가르키는 주소를 출력(배열의 이름은 배열의 맨 앞을 가르키는 특성에서 기인)
    printf("address of list (&list)     = %p\n",&list); //list배열 이름이 가르키는 주소를 저장한 메모리의 위치를 출력

    printf("---------------------------------------------\n\n"); //가시성을 위한 분리선
    printf("value of list[1]   = %d\n",list[1]); //list[1]의 값을 출력
    printf("address of list[1] = %p\n",&list[1]); //list[1]의 값을 가지고 있는 주소를 출력
    printf("value of *(list+1) = %d\n",*(list + 1)); //list배열 이름이 가르키는 주소에서 int형 변수 한개의 크기 만큼 주소값을 이동시킨 후 해당 주소값을 참조해서 값을 출력
    printf("address of list+1  = %p\n",list+1); //list배열 이름이 가르키는 주소에서 int형 변수 한개의 크기 만큼 주소값을 이동시킨 후 해당 주소값을 출력
    printf("---------------------------------------------\n\n"); //가시성을 위한 분리선

    printf("value of *plist[0] = %d\n",*plist[0]); //plist[0]이 가르키는 주소값을 참조해서 출력
    printf("&plist[0]          = %p\n",&plist[0]); //plist[0]이 가르키는 주소를 저장하는 메모리의 위치를 출력
    printf("&plist             = %p\n",&plist); //plist배열 이름이 가르키는 주소를 저장하는 메모리의 위치를 출력
    printf("plist              = %p\n",plist); //plist배열 이름이 가르키는 주소를 출력
    printf("plist[0]           = %p\n",plist[0]); //plist[0]의 값 출력
    printf("plist[1]           = %p\n",plist[1]); //plist[1]의 값 출력
    printf("plist[2]           = %p\n",plist[2]); //plist[2]의 값 출력
    printf("plist[3]           = %p\n",plist[3]); //plist[3]의 값 출력
    printf("plist[4]           = %p\n",plist[4]); //plist[4]의 값 출력

    printf("[----- 전설민 2021041046 -----]"); //이름 학번 출력
    free(plist[0]); //동적할당된 plist[0]위치의 할당을 해제
}

/*
요약 : 정적할당한 list의 주소값과 배열 이름, 특정 인덱스를 출력함으로써 배열과 배열의 이름이 가지는 특성을 파악하기 위한 프로그램이며,
plist를 통해서는 동적할당과 해제 방법, 포인터 배열의 이름이 가지는 의미, 동적할당된 인덱스를 제외한 나머지 포인터의 내용 등을 파악하는 내용이다.
해당 프로그램을 통해 정적할당을 통해 선언된 배열은 연속적인 주소값을 가지며, 배열의 이름은 인덱스 0번의 값을 저장하고 있는 메모리의 주소를 나타낸다는 것을 알 수 있다.
*/