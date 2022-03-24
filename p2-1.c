#include <stdio.h>

#define MAX_SIZE 100 //��ó���⸦ ���� ġȯ MAX_SIZE => 100

float sum(float [], int); //��ȯ���� float�� �Լ� sum ����
float input[MAX_SIZE], answer; //float MAX_SIZE(100)���� ���� �迭 input�� float�� ���� answer�� ����
int i; //int�� ���� i�� ����
void main(void)
{
    for(i=0; i < MAX_SIZE; i++) //i�� 0���� MAX_SIZE(100)���� ������Ű�鼭 �ش� ��� ���� ����� ����
        input[i] = i; //input[i]�� ���� i�� ���� ����
        
    printf("address of input = %p\n", input); //input �迭 �̸��� ����Ű�� �ּҸ� ���

    answer = sum(input, MAX_SIZE); //�Լ� sum�� input �迭 �̸��� MAX_SIZE(100)�� �μ��� �ְ� ������� answer�� ����
    printf("The sum is: %f\n", answer); //float�� ���� asnwer ���
}

float sum(float list[], int n) //�Լ� sum����, �Ű������� float �迭 �̸�(������)�� int�� ����
{
    printf("value of list = %p\n", list); //list �迭 �̸��� ����Ű�� �ּҰ� ���
    printf("address of list = %p\n\n", &list); //list �迭 �̸��� ����Ű�� �ּҸ� �����ϴ� �޸� ��ġ�� ���

    int i; //int�� ���� i�� �����ϸ�, ����ȿ���� �ش� �� ������ i�� ���������μ� �����
    float tempsum = 0; //float�� ���� tempsum�� �����ϸ�, ���� 0���� �ʱ�ȭ
    for(i = 0; i < n; i++) //i�� 0���� n���� ������Ű�鼭 �ش� ��� ���� ����� ����
        tempsum += list[i]; //tempsum�� ���� list[i]��ŭ�� ������
    return tempsum; //tempsum�� ��ȯ��
}

/*
��� : �Լ��� �ݺ����� ������ 1���� 99������ ���� ���� input�� ���ε��� ����ְ� sum�Լ��� ���� input�迭�� ���� ��� ������ ���� ��ȯ�����ν� �ľ��Ѵ�.
�߰���, �Ű������� ���� �迭�� �̸��� ���������ν� �ּҸ� ���� �������� ������, int�� ������ float�� ������ ���������ν� �ڵ����� ����ȯ�� �Ǵ��� Ȯ���� �� �ִ�.
*/