#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// #define top 10
// #define bottom 0
////////////////////////////////////////////////////////������x����˶�������û�취һ��һ�е����У����������ж��Ƿ�ɹ�
// int main()    //����ڵ��ԣ�����sleep���ʺ��޸����ִ���
// {
//     int x,y,i,j,v_x,v_y;
//     printf("������x��y��v_x��v_y\n");
//     scanf("%d%d%d%d",&x,&y,&v_x,&v_y);
//         for(int k=0;k<100;k++)
//         {
//             system("cls");
//             for(i=0;i<y;i++)
//                 printf("\n");
//             for(j=0;j<x;j++)
//                 printf(" ");
//             printf("O");
//             printf("\n");
//             Sleep(100);
//             y=y+v_y;
//             x=x+v_x;
//             if((y==top)||(y=bottom))
//                 {v_y=-v_y;
//                  /*continue;*/}
//             if((x==top)||(x=bottom))
//                 {v_x=-v_x;
//                  /*continue;*/}
//         }
//     return 0;
// }
/////////////////////////////////////////////////////
////////////////////////////////////////////////////////////��bug���꣬��ô�����µ�����С���������Ĵ�������
int main()
{
    int top=0,bottom=10,left=0,right=20;
    int x=10,y=5,v_x,v_y;
    printf("������X��Y������ٶ�\n");
    scanf("%d%d",&v_x,&v_y);
    while(1)
    {
        Sleep(100);
        system("cls");
        for(int i=0;i<y;i++)
            printf("\n");
        for(int j=0;j<x;j++)
            printf(" ");
        printf("O");
        //printf("\n");
        //if(top==y||bottom==y)//�����ʹ�õ�ʽ���жϵĻ������ĳ���ٶ������޷������ؾ�����������û�����Ʋ�������Ч��
          if(y<top||y>bottom)
            {v_y=-v_y;}
        //if(left==x||right==x)//�������Զ����ٶȵ�����»�����<>����
          if(x<left||x>right)  
            {v_x=-v_x;}
        y=y+v_y;
        x=x+v_x;
    }
    return 0;
}
//////////////////////////////////////////�Զ�̬���������*,��bug
// int main()
// {
//     int x,y;
//     printf("������XY����\n");
//     scanf("%d%d",&x,&y);//��������
//     for (int i=0;i<y;i++)//������������ﵽˢ�µ�Ч����ѭ��
//         {
//             system("cls");//��������
//             for(int l=0;l<i;l++)//Y����
//                 printf("\n");
//             for (int j=0;j<x;j++)//X����
//                 printf(" ");
//             printf("*\n");
//             Sleep(1000); //���������ٶȣ����㿴�����Ƿ�������ȷ
//         }
//     return 0;
// }
///////////////////////////////////////////
//////////////////////////////////////////////////////����������Ĺ淶���룬�Ĵ����ڵ�С��Ц��
// #include <stdio.h>
// #include <stdlib.h>
// #include <windows.h> 
// int main()
// {
// 	int i,j;
// 	int x = 0;
// 	int y = 5;
	
// 	int velocity_x = 1;
// 	int velocity_y = 1;
// 	int left = 0;
// 	int right = 20;
// 	int top = 0;
// 	int bottom = 10;
	
// 	while (1)
// 	{
// 		x = x + velocity_x;
// 		y = y + velocity_y;
		
// 		system("cls");
// 		for(i=0;i<x;i++)
// 			printf("\n");//����Y����
// 		for (j=0;j<y;j++)
// 			printf(" ");//����X����
// 		printf("o");//��ʾС��
// 		printf("\n"); //���У�Ϊʲô���У�
// 		Sleep(50);
// 		if ((x==top)||(x==bottom))
// 			velocity_x = -velocity_x;
// 		if ((y==left)||(y==right))
// 			velocity_y = -velocity_y;		
// 	}
// 	return 0;
// }
