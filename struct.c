#include <stdio.h>

struct student1 { //구조체 student1 선언
    char lastName; //char형 변수 lastName 선언
    int studentId; //int형 변수 studentId 선언
    char grade; //char형 변수 grade 선언
};

typedef struct { //구조체 타입 student2 선언
    char lastName; //char형 변수 lastName 선언
    int studentId; //int형 변수 studentId 선언
    char grade; //char형 변수 grade 선언
} student2;

int main() {

    struct student1 st1 = {'A', 100, 'A'}; //구조체 student1형 st1를 선언하며, 내부의 값을 각각 초기화한다

    printf("st1.lastName = %c\n", st1.lastName); //student1형 st1의 lastName을 출력
    printf("st1.studentId = %d\n", st1.studentId); //student1형 st1의 studentId을 출력
    printf("st1.grade = %c\n", st1.grade); //student1형 st1의 grade를 출력

    student2 st2 = {'B', 200, 'B'}; //구조체 student2형 st2를 선언하며, 내부의 값을 각각 초기화한다

    printf("\nst2.lastName = %c\n", st2.lastName); //student2형 st2의 lastName을 출력
    printf("st2.studentId = %d\n", st2.studentId); //student2형 st2의 studentId을 출력
    printf("st2.grade = %c\n", st2.grade); //student2형 st2의 grade를 출력

    student2 st3; //구조체 student2형 st3를 선언한다.

    st3 = st2; //st3에 st2의 값을 대입한다

    printf("\nst3.lastName = %c\n", st3.lastName); //student2형 st3의 lastName을 출력
    printf("st3.studentId = %d\n", st3.studentId); //student2형 st3의 studentId을 출력
    printf("st3.grade = %c\n", st3.grade); //student2형 st3의 grade를 출력

    if(st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade) //해결법으로 각각의 인수를 비교한다
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;
}

/*
요약 : 구조체 선언 시 struct와 typedef struct의 차이점을 파악하기 위해 만들어진 프로그램으로 보이며,
덤으로 같은 형태의를 가진 구조체끼리의 대입과 비교를 시도해보는 프로그램이다. 다만, st2 == st3 형식으로 비교하는 것은
컴파일러 오류를 낸다. 수정 후 
*/