#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// #define top 10
// #define bottom 0
////////////////////////////////////////////////////////加入了x轴的运动，但是没办法一行一行的运行，根本不能判断是否成功
// int main()    //相比于调试，还是sleep更适合修改这种代码
// {
//     int x,y,i,j,v_x,v_y;
//     printf("请输入x，y，v_x与v_y\n");
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
////////////////////////////////////////////////////////////无bug，嚓，怎么把上下弹跳的小球重做成四处碰壁了
int main()
{
    int top=0,bottom=10,left=0,right=20;
    int x=10,y=5,v_x,v_y;
    printf("请输入X与Y方向的速度\n");
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
        //if(top==y||bottom==y)//如果我使用等式来判断的话，如果某个速度正好无法连续地经过该数，就没有限制并反弹的效果
          if(y<top||y>bottom)
            {v_y=-v_y;}
        //if(left==x||right==x)//所以在自定义速度的情况下还是用<>可行
          if(x<left||x>right)  
            {v_x=-v_x;}
        y=y+v_y;
        x=x+v_x;
    }
    return 0;
}
//////////////////////////////////////////以动态到达坐标的*,无bug
// int main()
// {
//     int x,y;
//     printf("请输入XY坐标\n");
//     scanf("%d%d",&x,&y);//输入坐标
//     for (int i=0;i<y;i++)//配合清屏函数达到刷新的效果的循环
//         {
//             system("cls");//清屏函数
//             for(int l=0;l<i;l++)//Y坐标
//                 printf("\n");
//             for (int j=0;j<x;j++)//X坐标
//                 printf(" ");
//             printf("*\n");
//             Sleep(1000); //减缓运行速度，方便看代码是否运行正确
//         }
//     return 0;
// }
///////////////////////////////////////////
//////////////////////////////////////////////////////这个是完整的规范代码，四处碰壁的小球（笑）
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
// 			printf("\n");//到达Y坐标
// 		for (j=0;j<y;j++)
// 			printf(" ");//到达X坐标
// 		printf("o");//显示小球
// 		printf("\n"); //换行，为什么换行？
// 		Sleep(50);
// 		if ((x==top)||(x==bottom))
// 			velocity_x = -velocity_x;
// 		if ((y==left)||(y==right))
// 			velocity_y = -velocity_y;		
// 	}
// 	return 0;
// }
