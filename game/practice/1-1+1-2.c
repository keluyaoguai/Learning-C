//һ���ļ��ϣ����ƶ��е��ƶ��ɻ�,����˰��ӵĸ����
#include<stdio.h>
#include<stdlib.h>//system������ͷ�ļ�
#include<windows.h>//sleep������ͷ�ļ�
#include<conio.h>//getch���������//kbhit����Ҳ��
#define left 0
#define right 90
int main()                             //�������ˣ���ʾ���֣��ĵ�����?//�ն˵����⣬ɾ������������                                                               
{
    int x=5,y=10,i,j,k,n=0,fh;//��Щ��Ҫ��ѭ�����ﶨ�壬��Ȼ�仯��ı�������һ��ѭ���ᱻ����
    char input;
    int shout,kill=0,score=0,v_n=1;
    while(1)
    {
        system("cls");
        //��������ʾ����
        if(kill==0)
            {
                for(j=0;j<n;j++)//���ƶ�С���ǰǵĴ���
                    printf(" ");
                    printf("O\n");
                if(n<left||n>right)  
                    {v_n=-v_n;}
            n=n+v_n;
            }
        //��������ʾ�ӵ�
        if(shout==1)
        {
            for(i=0;i<x;i++)
                {
                    for(k=0;k<y;k++)//�������곬��50��������Ῠס,�����Ƕ��ѭ���Ŀ��Ʊ���һ�����µģ���i��Ϊk�ͽ����
                        printf(" ");
                    printf("  o\n");
                }
            shout=0;//������㣬�Ա���һ������
            if(kill==0)//��ֹ������ʧ���ӵ�������λ���Ե÷�
            {
                if((n-v_n)==(y+2))//�ж��ӵ��Ƿ���а���
                {kill=1;score++;}
            }
        }
        //��������ʾ����
        else
            for(i=0;i<x;i++)
                printf("\n");
        for(j=0;j<y;j++)
            printf(" ");//�ִ��������
        printf("  A\n");//�����ͷ
        for(j=0;j<y;j++)
            printf(" ");
        printf("=====\n"); //�������
        for(j=0;j<y;j++)
            printf(" ");
        printf(" ! !\n");//�����β
        printf("��:%d��:%d ������%d",x,y,score);
        //�����Ǵ����������
        if(kbhit())//������������ʱ�����������´�ѭ�����ﵽû���������ԭ�ز���ˢ�µ�Ч��
        {
            input = getch();
            if(input=='w')//����
                x--;
            if(input=='s')//����
                x++;
            if(input=='a')//����
                y--;
            if(input=='d')//����
                y++;
            if(input==' ')
                shout = 1;
            if(x<0||y<0)//ײǽ������Ϸ
                {
                    printf("Game Over\n");
                    break;
                }
            if(input=='p')//���һ���˳�����
                break;
        }
        //�����̶�������ѭ���󣬸������
        fh++;
        if(fh==500)
        {
            fh=0;
            kill=0;
        }
    }
    printf("DROP OUT\n");
    return 0;
}