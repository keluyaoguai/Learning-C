#include<stdio.h>
int main()
{
  int a=2;
  a+=a;
  printf("%d\n",a);
  a*=2+3;
  printf("%d\n",a);
  a/=a+a;          //��Ϊ�����ͣ�ϴ��С����ʣ0��
  printf("%d\n",a);
  return 0;
}