#include<stdio.h>
int main()
{
    int cj=0;
    scanf("%d",&cj);
    if(cj>=0&&cj<60)
        printf("�óɼ��ĵȼ�ΪE");
    else if(cj>=60&&cj<=69)
        printf("�óɼ��ĵȼ���D");
    else if(cj>=70&&cj<=79)
        printf("�óɼ��ĵȼ���C");
    else if(cj>=80&&cj<=89)
        printf("�óɼ��ĵȼ���B");
    else if(cj>=90&&cj<=100)
        printf("�óɼ��ĵȼ���A");
    else
        printf("�ɼ�����");
    return 0;
}