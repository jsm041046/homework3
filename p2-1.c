#include <stdio.h>

#define MAX_SIZE 100 //전처리기를 통한 치환 MAX_SIZE => 100

float sum(float [], int); //반환형이 float인 함수 sum 선언
float input[MAX_SIZE], answer; //float MAX_SIZE(100)개를 가진 배열 input과 float형 변수 answer를 선언
int i; //int형 변수 i를 선언
void main(void)
{
    for(i=0; i < MAX_SIZE; i++) //i를 0에서 MAX_SIZE(100)까지 증가시키면서 해당 블록 내의 명령을 실행
        input[i] = i; //input[i]의 값에 i의 값을 대입
        
    printf("address of input = %p\n", input); //input 배열 이름이 가르키는 주소를 출력

    answer = sum(input, MAX_SIZE); //함수 sum에 input 배열 이름과 MAX_SIZE(100)를 인수로 넣고 결과값을 answer에 대입
    printf("The sum is: %f\n", answer); //float형 변수 asnwer 출력
}

float sum(float list[], int n) //함수 sum정의, 매개변수는 float 배열 이름(포인터)과 int형 변수
{
    printf("value of list = %p\n", list); //list 배열 이름이 가르키는 주소값 출력
    printf("address of list = %p\n\n", &list); //list 배열 이름이 가르키는 주소를 저장하는 메모리 위치를 출력

    int i; //int형 변수 i를 선언하며, 히든효과로 해당 블럭 내에서 i는 지역변수로서 기능함
    float tempsum = 0; //float형 변수 tempsum을 선언하며, 값을 0으로 초기화
    for(i = 0; i < n; i++) //i를 0에서 n까지 증가시키면서 해당 블록 내의 명령을 실행
        tempsum += list[i]; //tempsum의 값에 list[i]만큼을 가산함
    return tempsum; //tempsum을 반환함
}

/*
요약 : 함수와 반복문의 사용법을 1부터 99까지의 값을 각각 input에 따로따로 집어넣고 sum함수를 통해 input배열의 값을 모두 가산한 값을 반환함으로써 파악한다.
추가로, 매개변수를 통해 배열의 이름을 전달함으로써 주소를 통한 참조르르 익히고, int형 변수를 float형 변수에 가산함으로써 자동으로 형변환이 되는지 확인할 수 있다.
*/