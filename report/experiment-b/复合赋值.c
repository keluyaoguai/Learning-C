#include<stdio.h>
int main()
{
  int a=2;
  a+=a;
  printf("%d\n",a);
  a*=2+3;
  printf("%d\n",a);
  a/=a+a;          //因为是整型，洗掉小数就剩0了
  printf("%d\n",a);
  return 0;
}