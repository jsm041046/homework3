#include <stdio.h>

struct student1 { //����ü student1 ����
    char lastName; //char�� ���� lastName ����
    int studentId; //int�� ���� studentId ����
    char grade; //char�� ���� grade ����
};

typedef struct { //����ü Ÿ�� student2 ����
    char lastName; //char�� ���� lastName ����
    int studentId; //int�� ���� studentId ����
    char grade; //char�� ���� grade ����
} student2;

int main() {

    struct student1 st1 = {'A', 100, 'A'}; //����ü student1�� st1�� �����ϸ�, ������ ���� ���� �ʱ�ȭ�Ѵ�

    printf("st1.lastName = %c\n", st1.lastName); //student1�� st1�� lastName�� ���
    printf("st1.studentId = %d\n", st1.studentId); //student1�� st1�� studentId�� ���
    printf("st1.grade = %c\n", st1.grade); //student1�� st1�� grade�� ���

    student2 st2 = {'B', 200, 'B'}; //����ü student2�� st2�� �����ϸ�, ������ ���� ���� �ʱ�ȭ�Ѵ�

    printf("\nst2.lastName = %c\n", st2.lastName); //student2�� st2�� lastName�� ���
    printf("st2.studentId = %d\n", st2.studentId); //student2�� st2�� studentId�� ���
    printf("st2.grade = %c\n", st2.grade); //student2�� st2�� grade�� ���

    student2 st3; //����ü student2�� st3�� �����Ѵ�.

    st3 = st2; //st3�� st2�� ���� �����Ѵ�

    printf("\nst3.lastName = %c\n", st3.lastName); //student2�� st3�� lastName�� ���
    printf("st3.studentId = %d\n", st3.studentId); //student2�� st3�� studentId�� ���
    printf("st3.grade = %c\n", st3.grade); //student2�� st3�� grade�� ���

    if(st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade) //�ذ������ ������ �μ��� ���Ѵ�
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;
}

/*
��� : ����ü ���� �� struct�� typedef struct�� �������� �ľ��ϱ� ���� ������� ���α׷����� ���̸�,
������ ���� �����Ǹ� ���� ����ü������ ���԰� �񱳸� �õ��غ��� ���α׷��̴�. �ٸ�, st2 == st3 �������� ���ϴ� ����
�����Ϸ� ������ ����. ���� �� 
*/