#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,i,j,velocity;
    printf("������x��v\n");
    scanf("%d%d",&x,&velocity);
    for(int k=0;k<100;k++)
    {
        for(;;)
        {
            system("cls");
            for(i=0;i<y;i++)
                printf("\n");
            for(j=0;j<x;j++)
                printf(" ");
            printf("(*)");
            y=y+velocity;
            if(y==11)
                break;
            if(y==-1)
                break;
        }
        velocity=-velocity;//ͨ��break�ж�����ѭ�����ı��ٶȺ��ٴ�ִ�и�ѭ������ɡ���������Ч��
    }
    return 0;
}
//////////////////////////////////////////�Զ�̬���������*
// int main()
// {
//     int x,y;
//     scanf("%d%d",&x,&y);//��������
//     for (int i=0;i<y;i++)//������������ﵽˢ�µ�Ч����ѭ��
//         {
//             system("cls");//��������
//             for(int l=0;l<i;l++)//Y����
//                 printf("\n");
//             for (int j=0;j<x;j++)//X����
//                 printf(" ");
//             printf("*\n");
//         }
//     return 0;
// }
///////////////////////////////////////////
