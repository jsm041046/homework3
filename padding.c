#include <stdio.h>

struct student { //����ü student ����
    char lastName[13]; //char(1����Ʈ)�� 13���� ������ �迭 lastName ����
    int studentId; //int�� studentId ����
    short grade; //short�� grade ����
};

int main()
{

    struct student pst; //����ü student���¸� ���� ���� pst ����

    printf("size of student = %ld\n", sizeof(struct student)); //student���°� �����ϴ� �޸� ũ�� ���
    printf("size of int = %ld\n", sizeof(int)); //int���� �����ϴ� �޸� ũ�� ���
    printf("size of short = %ld\n", sizeof(short)); //short���� �����ϴ� �޸� ũ�� ���

    return 0;
}

/*
��� : �ش� ���α׷��� ����� ���� student ������ ��� ������ ũ�⸦ ��ġ�� �ͺ��� student ����ü�� ������ �޸� �뷮�� �� ū ���� �� �� �ִµ�,
�̴� �ý����� ���ǿ� ���� ���� ������ �޸𸮷� ������ ���� �κ��� ä���ִ� padding�� ���� ������ ���� �ľ��� �� ������, �׷��� ���� ������� ���α׷��̴�.
*/