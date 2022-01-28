//  #include <stdio.h>
//  int main()                                                     //打印汉军已掠地
//  {
//      printf("汉军已掠地?");
//      return 0;
//  }
////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()                                                         //选择结构
// {
//     int input=0;
//    printf("上大学") ;
//    printf("你要好好学习吗?(1/0)>:\n");
//    scanf("%d",&input);
//    if (input==1)
//    printf("你即将走上人生巅峰\n");
//    if (input==0)//else 直接可以的  
//    printf("什么浪费国家资源的蛀虫\n");
//     return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()                                               //真他么励志
// {
//     int day=0;
//     printf("开始学习");
//     while (day<=1000)
//     {
//       day++;
//       printf("学习的第%d天\n",day);
//     }
//     if(day>1000)
//         printf("你已经成为学魔了");  
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int Cheng(int x,int y)                               //自定义乘法函数
// {
//     int z=x*y;
//     return z;
// }
// int main()
// {
//     int num1=0;
//     int num2=0;
//     int che=0;
//     scanf("%d%d",&num1,&num2);
//     che=Cheng(num1,num2);
//     printf("输入的是%d和%d\n",num1,num2);
//     printf("两数相乘的结果是%d\n",che);
//     return 0;
// }
// int pf(int x)
// {
//     int y=x*x;
//     return y;
// }
// int pfh(int a,int b, int c,int d,int e)
// {
//     int A=pf(a);
//     int B=pf(b);
//     int C=pf(c);
//     int D=pf(d);
//     int E=pf(e);
//     int h=A+B+C+D+E;
//     return h;
// }
// #include<stdio.h>
// int main()
// {
//     int a=0;
//     int b=0;
//     int c=0;
//     int d=0;
//     int e=0;
//     scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//     int jg=pfh(a,b,c,d,e);
//     printf("这五个数的平方和是%d",jg);
//     return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// int main()                            //用循环结构求阶乘
// {                                     //TMD，编译器摆烂，我还以为有bug！一个小时啊一个小时，没了！
//     int a=1;
//     int b=1;
//     int x=0;
//     scanf("%d",&x);
//     while (a<=x)
//     {
//        b=a*b;
//        a++;
//     }
//     printf("%d的阶乘是%d\n",x,b);
//     return 0;
// }

// #include<stdio.h>
// int main()                                //用循环结构打印数组所有内容
// {
//    int arr[10]={11,2,3,4,5,6,256,8,9,10};
//    int i=0;
//    while (i<10)
//    {
//      printf("%d\n",arr[i]);
//      i++;
//    }                                                                                                                     
//   return 0;
// }
//////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()                       //取余数的运算符
// {
//   int a=9;
//   int b=4;
//   int c=a%b;
//   printf("%d",c);
//   return 0;
// }
//////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()                      //求两个数的最大值
// {
//   int a=0;
//   int b=0;
//   scanf("%d%d",&a,&b);
//   if(a<b)
//     printf("最大值为%d",b);
//   else
//     printf("最大值为%d",a);
//   return 0;
// }
///////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int zdz(int x,int y)                  //自定义求两数最大值的函数
// {
//   if (x<y)
//     x=y;
//   return x;
// } 
// int main ()
// {
//   int a=0;
//   int b=0;
//   scanf("%d%d",&a,&b);
//   int X=zdz(a,b);
//   printf("输入的数字是%d和%d\n两数的最大值是%d",a,b,X);
//   // printf("两数的最大值是%d",X);
//   return 0;
// }
////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()                           //单目操作符sizeof
// {
//   int arr[]={1,2,3,4,5,6,7,8};
//   printf("%d",sizeof(arr));
//   return 0;
// }
////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()                                      //整活儿，但是没整成功，大抵是输入字符串的有bug
// {
//   char a[]="你是什么人？";
//   char b[]="我是好人";
//   char c[]="西内，Ex咖喱棒！";
//   char d[]="知道了";
//   char e[]="0";
//   printf("%s\n",a);
//   scanf("%c",&e);
//   if (e==b)
//     printf("%s",d);
//   else
//     printf("%s",c);
//   return 0;
// }
//////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()                         //按位取反
// {
//   int a=0;
//   int b=~a;
//   printf("%d",b);
//   return 0;
// }
///////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()
// {
//   int a=10;
//   int b=a++;                //后置符号等于    b=a;  a++;
//   printf("a=%d\nb=%d\n",a,b);
//   int c=10;
//   int d=++c;                //前置符号等于    c++;  d=c;
//   printf("c=%d\nd=%d",c,d);
//   return 0;
// }
//////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()                     //强制类型转换
 
//  {
//    int a=(int)5.99;
//    printf("%d",a);
//    return 0;
//  }
/////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()
// {
//   typedef int get;                       //将数据类型的代号重命名的命令
//   get a=88;
//   printf("%d",a);
//   return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h> 
// extern int Add(int,int);                //extern声明，屁用没有，什么鬼？？
// int mian()
// {
//   int a=4;
//   int b=8;
//   int c=Add(a,b);
//   printf("%d",c);
//   return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// #define MAX 100               //define定义常量
// int main()
// {
//   int a=MAX;
//   printf("%d",a);
//   return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// #define MAX(X,Y) (X>Y?X:Y)      //define定义宏，三目操作符的应用
// int main()
// {
//   int x=0;
//   int y=0;
//   scanf("%d%d",&x,&y);
//   int z=MAX(x,y);
//   printf("两者的最大值是%d",z);
//   return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()                   //申请内存的内存的地址数量由物理层面的电线根数决定？64根有2的64次方种组合，可以用16位十六进制数表示
// {
//   int a=10;
//   int*p=&a;                //数据类型后加上*就变成了该数据类型的地址数据类型，用来存放地址的变量，指针变量
//   printf("%p\n",&a);       //某个变量占有某几个内存位，保存它的地址的指针变量是重新申请了其他的内存位来保存地址数据的，32位是4个字节，64位是8个字节
//   printf("%p\n",p);
//   *p=20;                      //解引用符，跳过内存名称，通过地址直接操作该内存里的数据
//   printf("%d",a);             
//   return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// struct Game                    //结构体，各种类型的数据的集合，相当于推广的数组
// {
//   char name[20];
//   int  price;
//   int  size;
// };
// int main()
// {
//   struct Game a={"Dark Soul",368,21};
//   printf("游戏名:%s\n价格:%d元\n游戏大小:%dG\n",a.name,a.price,a.size);  //结构体变量.单元
//   struct Game* ds=&a;
//   printf("%p\n",ds);
//   printf("游戏名:%s",ds->name);   //结构体地址->单元   地址也就是指针，可以直接指向结构体内的单元，很方便，指针作为面向对象的C语言的特色，是体现在这里吗
//   return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
    
    return 0;
}