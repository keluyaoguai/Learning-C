//想查笔记用Ctrl+F
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
//    printf("你要好好学习吗?(1/0)>:\n");          //养成加\n的良好习惯，这样能立刻通过、n发现输入法的中英错误
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

// #include<stdio.h>
// int main()                   //整活，但是翻车，比大小条件不能两边夹着变量，要用&&分成两个式子
// {
//     printf("智能成年判定系统启动\n请输入你的年龄\n");
//     int a=0;
//     scanf("%d",&a);
//     if(a<18 && a>0)
//         {
//             printf("判定中————\n您未成年呢亲\n");
//         }
//     else if(a>=18 && a<=140)
//         {
//             printf("判定中————\n您已成年\n");
//         }
//     else
//     {
//         if(a<=0)
//         printf("判定中————\n呵呵，我是你爹\n");
//         else
//         printf("判定中————\n呵呵，挺长寿的");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()                   //前两个花括号可以去除，最后一个去除后会打印乱码
// {                            //只有一个操作是不用花括号的，多条操作要组成代码块
//     printf("智能成年判定系统启动\n请输入你的年龄\n");        
//     int a=0;
//     scanf("%d",&a);
//     if(a<18 && a>0)                       //如果条件是判断相等，建议把数字写在前面，(5==num)，这样如果少打一个=就会报错
//       printf("判定中————\n您未成年呢亲\n");
//     else if(a>=18 && a<=140)
//       printf("判定中————\n您已成年\n");
//     else
//     {                                           //这个二级判定也可以用两个else if顶掉，逻辑正确即可
//         if(a<=0)
//         printf("判定中————\n呵呵，我是你爹\n");
//         else
//         printf("判定中————\n呵呵，挺长寿的");
//     }
//     return 0;
// }
/////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()
// {
//     int a=0;              //else会与最近的if语句配对，不要被缩进误导
//     int b=2;
//     if(a==1)
//         if(b==2)
//            printf("hehe\n");
//     else
//         printf("haha\n");  
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////这个是很好的检验当前输入法中英状态的操作

// #include<stdio.h>
// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     switch (a)                            //多分支的switch语句,条件只能是整型判断？大概
//     {
//      case 1:
//         printf("星期一 \n");
//         break;
//      case 2:
//         printf("星期二 \n");
//         break;
//      case 3:
//         printf("星期三 \n");
//         break;
//      case 4:
//         printf("星期四 \n");
//         break;
//      case 5:
//         printf("星期五 \n");
//         break;
//      case 6:
//         printf("星期六 \n");
//         break;
//      case 7:
//         printf("星期日 \n");
//         break;
//     }  
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     switch (a)
//     { 
//      case 1:                          //连续多分支同操作的简化思路，逻辑正确，可以运行，终究是语言
//      case 2:
//      case 3:
//      case 4:
//      case 5:
//         printf("工作日 \n");
//         break;
//      case 6:
//      case 7:
//         printf("休息日 \n");
//         break;
//      default:              //对超出处理范围的反应，可有可无看心情
//         printf("做梦呢，一星期明明只有七天");
//     }  
//     return 0;
//}
////////////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()
// {
//     int i=1;
//     while(i<=100)
//     {
    
//         int a=i%2;
//         if(1==a)
//          printf("%d\n",i);
//          i++;
//     }
//     return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////

// #include<sal.h>
// int main()
// {
//     int n=1;
//     int m=2;
//     switch (n)
//     {
//     case 1:
//         m++;
//     case 2:
//         n++;
//     case 3:
//         switch(n)
//         {
//             case 1:
//                 n++;
//             case 2:
//                 m++;
//                 n++;
//             break;
//         }
//     case 4:
//         m++;
//         break;
//     default:
//         break;
//     }
//     return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////

// #include <stdio.h>
// int main()                //输入输出函数
// {
//     char a=getchar();
//     putchar(a);
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////
 
// #include<stdio.h>
// int main()
// {
//     // int a=0;
//     // int i=1;
//     // while(i<=100)
//     // {
//     //     a=i+a;
//     //     i++;
//     // }
//     // printf("%d",a);
//     // return 0;
//     int a=0;
//     int i=0;
//     do
//     {
//         i++;
//         a=i+a;
//     } 
//     while (i<100);
//     printf("%d",a);
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()
// {
//     int j=0;                     //for语句嵌套穷举排列组合
//     int q=0;
//     int k=0;
//     for(j=1;j<5;j++)
//     {
//         for(q=0;q<5;q++)
//         {
//            for(k=0;k<5;k++) 
//            //if(j!=q&&j!=k&&q!=k)          //删掉这一句就是另一种了
//              printf("%d%d%d\n",j,q,k);
//         }
//     }
//     return 0;
// }


// #include<stdio.h>                            //用while结构重现
// int main()
// {
//     int j=1;
//     int q=0;
//     int k=0;
//     while (j<5)
//     {
//         while(q<5)
//         {
//             while(k<5)
//             {
//                 if(j!=q&&j!=k&&q!=k)
//                 printf("%d%d%d\n",j,q,k);
//                 k++;                         //第一个bug，这里的k++与q++位置反了，不能作为循环变量，导致这么简单的程序跑满了cpu
//             }
//             k=0;          //第二个bug，这里不手动归零的话无法进入第三个循环，跟if语句时不一样
//             q++;
//         }
//         q=0;              //同上
//         j++;
//     }
    
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()                             //奖金计算，只选择一种的多选择结构
// {
//     int l=0;
//     float j=0;
//     float a=1;
//     float b=0.75;
//     float c=1;
//     float d=0.6;
//     float e=0.6;
//     scanf("%d",&l);
//     if(l<=10)
//         j=0.1*l;
//     else if(l<=20)
//         {
//             int l2=l-10;
//             j=a+l2*0.075;
//             //j=a+(l-10)*0.075;     //这种形式是可以识别的，活用括号，大概
//         }
//     else if(l<=40)
//         {
//             int l3=l-20;
//             j=a+b+l3*0.05;
//         }
//     else if(l<=60)
//         {
//             int l4=l-40;
//             j=a+b+c+l4*0.03;
//         }
//     else if(l<=100)
//         {
//             int l5=l-60;
//             j=a+b+c+d+l5*0.015;
//         }
//     else if(l>100)
//         {
//             int l6=l-100;
//             j=a+b+c+d+e+l6*0.01;
//         }
//     printf("奖金为%f万元",j);
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// #include<math.h>
// int main()                               //答案给的求解思路看不懂欸
// {
//  int d=0;
//  int i=0;
//   while (i!=1)
//  {
//      d++;
//      int y=d+100;
//      int x=d+168;
//      double m=sqrt(y);                     //求平方根的函数要声明math库函数
//      double n=sqrt(x);
//      if(m==(int)m&&n==(int)n)   //判断相等是两个等号
//         {
//             printf("该数字是%d\n",d);
//             i=1;                           //只要逻辑可行的话真的是怎么都行呢
//         } 
//  }
//  return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()
// {
//     putchar(getchar());
//     putchar(getchar());
//     putchar(getchar());
//     putchar(getchar());
//     putchar('\n');
//     return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////

// #include<stdio.h>
// int main()
// {
//     char a,b;
//     a=getchar();
//     b=a+32;            //通过ASCII码完成大写转小写
//     putchar(b);
//     putchar('\n');
//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
    int i;
    printf("请输入波动幅度：");    //根据那个代码运行产生的图像逆推出来的第一部分代码，基本一致，还算可以
    scanf("%d",&i);
    for(int x=0;x<33;x++)
    {
        for(int m=0;m<i;m++)
        {   
            for(int n=0;n<=m;n++)
            {printf(" ");}
            printf("#\n");
        }
        for(int m=i;m>0;m--)
        {   
            for(int n=m;n>0;n--)
            {printf(" ");}
            printf("#\n");
        }   
    }
    
    return 0;
}