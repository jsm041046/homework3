#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **x; //int�� ���� ������ x�� �����Ѵ�

    printf("sizeof(x) = %lu\n", sizeof(x)); //���� ������ x�� ������ �޸� �뷮�� ����Ѵ�
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //���� ������ x�� �������� ������ �޸� �뷮�� ����Ѵ�
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //���� ������ x�� ���� �������� ������ �޸� �뷮�� ����Ѵ�
}

/*
��� : ���� �����Ϳ� �ش� ���� �����͸� �����ؼ� ���� ������, �ι� �����ؼ� ���� int�������� �޸� �뷮�� Ȯ���ϴ� ������ ���α׷��̴�.
�̸� ���� �����Ϳ� ���������� ���� 4����Ʈ�� �޸� �뷮�� ������ �� �� �ִ�.
*/