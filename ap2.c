#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5]; //int�� 5���� ���� �迭 list ����
    int *plist[5]; //int�� ������ �迭 plist 5�� ����

    list[0] = 10; //list[0]�� 10 ����
    list[1] = 11; //list[1]�� 11 ����

    plist[0] = (int*)malloc(sizeof(int)); //intũ�⸸ŭ(4����Ʈ)�� �ּҸ� �Ҵ� �� �� �ش� �ּ� ��ġ�� plist[0]���� ����

    printf("list[0] \t= %d\n", list[0]); //list[0]�� �� ���
    printf("address of list \t= %p\n", list); //list �迭 �̸��� ����Ű�� �ּ� ���
    printf("address of list[0] \t= %p\n", &list[0]); //list[0]�� ���� ������ �޸� �ּҸ� ���
    printf("address of list + 0 \t= %p\n", list+0); //list �迭 �̸��� ����Ű�� �ּҿ��� int�� ������ �޸� ũ���� 0�踸ŭ �̵��� ��ġ�� �ּ� ���
    printf("address of list + 1 \t= %p\n", list+1); //list �迭 �̸��� ����Ű�� �ּҿ��� int�� ������ �޸� ũ���� 1�踸ŭ �̵��� ��ġ�� �ּ� ���
    printf("address of list + 2 \t= %p\n", list+2); //list �迭 �̸��� ����Ű�� �ּҿ��� int�� ������ �޸� ũ���� 2�踸ŭ �̵��� ��ġ�� �ּ� ���
    printf("address of list + 3 \t= %p\n", list+3); //list �迭 �̸��� ����Ű�� �ּҿ��� int�� ������ �޸� ũ���� 3�踸ŭ �̵��� ��ġ�� �ּ� ���
    printf("address of list + 4 \t= %p\n", list+4); //list �迭 �̸��� ����Ű�� �ּҿ��� int�� ������ �޸� ũ���� 4�踸ŭ �̵��� ��ġ�� �ּ� ���
    printf("address of list[4] \t= %p\n", &list[4]); //list[4]�� ���� ������ �޸� �ּҸ� ���

    free(plist[0]); //�����Ҵ�� plist[0]��ġ�� �Ҵ��� ����
}
//��� : ap1.c���� �ľ��� ���� �� �����Ҵ�� �迭�� �� ������ �������� �ּҰ��� �����ٴ� ���� Ȯ���� Ȯ���ϴ� ���α׷��̴�