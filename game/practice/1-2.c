#include<stdio.h>
#include<stdlib.h>//system������ͷ�ļ�
#include<windows.h>//sleep������ͷ�ļ�
#include<conio.h>//getch���������//kbhit����Ҳ��
/////////////////////////////////////////////////////////��һ�����ӹ������С�ɻ�
int main()                                                                                      
{
    int x=5,y=10,i,j,k;//��Щ��Ҫ��ѭ�����ﶨ�壬��Ȼ�仯��ı�������һ��ѭ���ᱻ����
    char input;
    int shout,kill=0,bz=7,score=0;
    while(1)
    {
        system("cls");
        //��������ʾ����
        if(kill==0)
            {
                for(i=0;i<bz;i++)
                    printf(" ");
                printf("(X)\n");
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
            if(bz==(y+1))//�ж��ӵ��Ƿ���а���
                {kill=1;score++;}
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
    }
    printf("DROP OUT\n");
    return 0;
}
////////////////////////////////////////////////////////////////////////////////�����ӵ��ķɻ���
// int main()                                                                                      
// {
//     int x=5,y=10,i,j,k;//��Щ��Ҫ��ѭ�����ﶨ�壬��Ȼ�仯��ı�������һ��ѭ���ᱻ����
//     char input;
//     int shout;
//     while(1)
//     {
//         system("cls");
//         if(shout==1)
//         {
//             for(i=0;i<x;i++)
//                 {
//                     for(k=0;k<y;k++)//�������곬��50��������Ῠס,�����Ƕ��ѭ���Ŀ��Ʊ���һ�����µģ���i��Ϊk�ͽ����
//                         printf(" ");
//                     printf("  o\n");
//                 }
//             shout=0;//������㣬�Ա���һ������
//         }
//         else
//             for(i=0;i<x;i++)
//                 printf("\n");
//         for(j=0;j<y;j++)
//             printf(" ");//�ִ��������
//         printf("  A\n");//�����ͷ
//         for(j=0;j<y;j++)
//             printf(" ");
//         printf("=====\n"); //�������
//         for(j=0;j<y;j++)
//             printf(" ");
//         printf(" ! !\n");//�����β
//         printf("��:%d��:%d",x,y);
//         if(kbhit())//������������ʱ�����������´�ѭ�����ﵽû���������ԭ�ز���ˢ�µ�Ч��
//         {
//             input = getch();
//             if(input=='w')//����
//                 x--;
//             if(input=='s')//����
//                 x++;
//             if(input=='a')//����
//                 y--;
//             if(input=='d')//����
//                 y++;
//             if(input==' ')
//                 shout = 1;
//             if(x<0||y<0)//ײǽ������Ϸ
//                 {
//                     printf("Game Over\n");
//                     break;
//                 }
//             if(input=='p')//���һ���˳�����
//                 break;
//         }
//     }
//     printf("DROP OUT\n");
//     return 0;
// }
//////////////////////////////////////////////////ͨ��getch����ʹ�÷ɻ���������λ��
// int main()
// {
//     int x=5,y=10,i,j;//��Щ��Ҫ��ѭ�����ﶨ�壬��Ȼ�仯��ı�������һ��ѭ���ᱻ����
//     char c;
//     while(1)
//     {
//         system("cls");
//         for(i=0;i<x;i++)//�ִ���������
//             printf("\n");
//         for(j=0;j<y;j++)
//             printf(" ");//�ִ��������
//         printf("  ^\n");//�����ͷ
//         for(j=0;j<y;j++)
//             printf(" ");
//         printf("=====\n"); //�������
//         for(j=0;j<y;j++)
//             printf(" ");
//         printf(" ! !\n");//�����β
//         if(kbhit())//������������ʱ�����������´�ѭ�����ﵽû���������ԭ�ز���ˢ�µ�Ч��
//         {
//             c=getch();
//             if(c=='w')//����
//                 x--;
//             if(c=='s')//����
//                 x++;
//             if(c=='a')//����
//                 y--;
//             if(c=='d')//����
//                 y++;
//             if(x<0||y<0)//ײǽ������Ϸ
//                 {
//                     printf("Game Over\n");
//                     break;
//                 }
//             if(c=='p')//���һ���˳�����
//                 break;
//         }
//     }
//     printf("DROP OUT\n");
//     return 0;
// }
///////////////////////////////////////////////////////////////���Ը��ݼ�������λ�Ƶ�С�ɻ�
// int main()                                          //�������scanf��������ģ��س����鷳
// {
//     int x=5,y=10,i,j;//��Щ��Ҫ��ѭ�����ﶨ�壬��Ȼ�仯��ı�������һ��ѭ���ᱻ����
//     char c;
//     while(1)
//     {
//         system("cls");

//         for(i=0;i<x;i++)
//             printf("\n");
//         for(j=0;j<y;j++)
//             printf(" ");
//         printf("  ^\n");
//         for(j=0;j<y;j++)
//             printf(" ");
//         printf("=====\n");
//         for(j=0;j<y;j++)
//             printf(" ");
//         printf(" ! !\n");
//         printf("�������ж�\n");
//         scanf("%c",&c);
//         if(c=='w')//����
//             x--;
//         if(c=='s')//����
//             x++;
//         if(c=='a')//����
//             y--;
//         if(c=='d')//����
//             y++;
//         if(x<0||y<0)//ײǽ������Ϸ
//             {
//                 printf("Game Over\n");
//                 break;
//             }
//     }
//     return 0;
// }