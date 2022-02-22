// #include<stdio.h>       //网上找的，自己分析循环结构，挺好的
// int main()
// {
//     int i,j,k,n,l;
//     printf("输入尺寸：");
//     scanf("%d",&n);
//     //while(1)
//     for(int m=0;m<1;m++)
//     {
//         for(k=1;k<=200;k++)
//         {
//             for(i=1;i<=n;i++)
//             {
//                 for(j=1;j<=i;j++)
//                 {
//                     printf(" ");
//                 }
//                 printf(" *\n");
//             }

//             for(i=1;i<=n;i++)
//             {
//                 for(j=n;j>=i;j--)
//                 {
//                     printf(" ");
//                 }
//                 printf(" *\n");
//             }
//         }

//         // for(k=1;k<=200;k++)
//         // {
            
//         //     for(i=1;i<=n;i++)
//         //     {
//         //         for(j=n;j>=i;j--)
//         //         {
// 	    //             printf(" *");
//         //         }
// 	    //         for(i=1;i<=n;i++)
//         //         {
//         //             for(j=1;j<=i;j++)
//         //             {
//         //                 printf(" *");
//         //             }
//         //             printf("\n");
//         //         }
//         //         printf("\n");
//         //     }

//         // }
//         // for(k=1;k<=200;k++)
//         // {
//         //     for(i=1;i<=n;i++)
//         //     {
//         //         for(j=1;j<=i-1;j++)
//         //         {
// 	    //             printf("  ");
//         //         }
	   
//         //         for(l=1;l<=n-i+1;l++)
//         //         {
//         //             printf("* ");
// 	    //         }
// 	    //         printf("\n"); 
//         //     }


//         //     for(i=1;i<=n;i++)
//         //     {
//         //         for(j=n;j>=i+1;j--)
//         //         {
// 	    //             printf("  ");
// 	    //         }
//         //         for(l=1;l<=i;l++)
//         //         {
//         //             printf("* ");
// 	    //         }
// 	    //         printf("\n"); 
//         //     }
//         // }
//         // for(k=1;k<=200;k++)
//         // {
//         //     for(i=1;i<=n;i++)
//         //     {
//         //         for(j=1;j<=i-1;j++)
//         //         {
//         //             printf("  ");
//         //         }
//         //         printf("*");
//         //         for(l=1;l<=n-i+1;l++)
//         //         {
//         //             printf("    ");
//         //         }
            
//         //         printf("*\n"); 
//         //     }
//         //     for(i=1;i<=n;i++)
//         //     {
//         //         for(j=n;j>=i+1;j--)
//         //         {
//         //             printf("  ");
//         //         }
//         //         printf("*");
//         //         for(l=1;l<=i;l++)
//         //         {
//         //             printf("    ");
//         //         }
//         //         printf("*\n"); 
//         //     }
//         // }
//     }
// return 0;
// }
/////////////////////////////////////////////////////////////////////////////////
//网上那个比赛的代码
// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>

// using namespace std;

// /**
//  * Auto-generated code below aims at helping you parse
//  * the standard input according to the problem statement.
//  **/

// int main()
// {
//     string s;
//     getline(cin, s);

//     int a=0,b=0,c=0;
//     for(int i=0; i<s.length(); ++i) {
//         if(s[i] >='A' && s[i] <='Z') ++a;
//         if(s[i] >='a' && s[i] <='z') ++b;
//         if(s[i] >='1' && s[i] <='9') ++ c;
//     }
//     if(s.length()>=8 && a && b && c) cout << "true"; else cout <<"false";
// }