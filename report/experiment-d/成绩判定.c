#include<stdio.h>
int main()
{
    int cj=0;
    scanf("%d",&cj);
    if(cj>=0&&cj<60)
        printf("该成绩的等级为E");
    else if(cj>=60&&cj<=69)
        printf("该成绩的等级是D");
    else if(cj>=70&&cj<=79)
        printf("该成绩的等级是C");
    else if(cj>=80&&cj<=89)
        printf("该成绩的等级是B");
    else if(cj>=90&&cj<=100)
        printf("该成绩的等级是A");
    else
        printf("成绩错误");
    return 0;
}