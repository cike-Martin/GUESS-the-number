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
    int ret = rand() % 100 + 1;//生成1~100随机数
    //printf("%d\n",ret);
    while (1)
    {
        printf("请猜数字:>");
        scanf("%d", &guess);
        if (guess < ret)
            printf("猜小了\n");
        else if (guess > ret)
            printf("猜大了\n");
        else
        {
            printf("恭喜你,猜对了\n");
            break;
        }
    }

}

int main()
{
    int input = 0;

    srand((unsigned int)time(NULL));//强制类型转化,null--->空指针相当于0
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            printf("猜数字游戏\n");
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误,重新选择!\n");
            break;
        }
    } while (input);

    return 0;
}