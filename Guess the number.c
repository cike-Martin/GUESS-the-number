#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

void menu()
{
    printf("********************\n");
    printf("******* 1.play *****\n");
    printf("******* 0.exit *****\n");
    printf("********************\n");


}

void game()
{
    int guess;
    int ret = rand() % 100 + 1;//����1~100�����
    //printf("%d\n",ret);
    while (1)
    {
        printf("�������:>");
        scanf("%d", &guess);
        if (guess < ret)
            printf("��С��\n");
        else if (guess > ret)
            printf("�´���\n");
        else
        {
            printf("��ϲ��,�¶���\n");
            break;
        }
    }

}

int main()
{
    int input = 0;

    srand((unsigned int)time(NULL));//ǿ������ת��,null--->��ָ���൱��0
    do
    {
        menu();
        printf("��ѡ��:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            printf("��������Ϸ\n");
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("ѡ�����,����ѡ��!\n");
            break;
        }
    } while (input);

    return 0;
}