// //四
#include<stdio.h>
int main()
{
    // int c1,c2,c3,c4;
    // scanf("%d%d%d%d",&c1,&c2,&c3,&c4);
    // printf("%d\n%d\n%d\n%d",c1,c2,c3,c4);//错误的废码
    char c1,c2,c3,c4;  //A B C D
    scanf("%s%s%s%s",&c1,&c2,&c3,&c4);
    printf("%d\n%d\n%d\n%d",c1,c2,c3,c4);        //将字符数据直接以整型形式输出就行了吧，大概，毕竟我又没查资料
    return 0;
}
//五
#include<stdio.h>
int main()
{
    int d1,d2,d3,d4;  //60 61 62 63, A B C D
    scanf("%d%d%d%d",&d1,&d2,&d3,&d4);
    d1=d1+5;
    d2=d2+5;  //输入值和输出值的码差五位
    d3=d3+5;
    d4=d4+5;
    //printf("%d\n%d\n%d\n%d",d1,d2,d3,d4);
    //printf("%s\n%s\n%s\n%s",d1,d2,d3,d4);   //\s是字符串的，记混了
    printf("%c\n%c\n%c\n%c",d1,d2,d3,d4);
    return 0;
}
