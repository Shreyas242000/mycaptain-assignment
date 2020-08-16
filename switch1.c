#include<stdio.h>
void main()
{
    int choice=0;
    printf("enter random no to 5");
    scanf("%d",&choice);
    switch (choice)
    {

    case1:printf("french price, Rs-99");
    break;
    case2:printf("burger Rs- 129");
    break;
    case3:printf("pasta Rs- 179");
    break;
    case4:printf("pizza RS 239");
    break;
    case5:printf("Sandwich, Rs-149");
    default:printf("invalid choice");
    }
    return 0;


}
