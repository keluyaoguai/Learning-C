#include<stdio.h>
int main()
{
    printf("������������");
    int s;
    scanf("%d",&s);
    int i=0;
    int x=1,y=1,z=0;
    for(;;)
    { 
        x=y+z;//
        i++;                        //
        printf("��%d���ǣ�%d\n",i,x);//
        if(s==i)                    //
            break;                  //
        y=z+x;
        i++;
        printf("��%d���ǣ�%d\n",i,y);
        if(s==i)
            break;
        z=x+y;
        i++;
        printf("��%d���ǣ�%d\n",i,z);
        if(s==i)
            break;
    }
    return 0;
}