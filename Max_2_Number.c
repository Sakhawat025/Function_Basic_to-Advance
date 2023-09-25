#include<stdio.h>

void Maximum(int a,int b)
{
    int max;
    /*if(a>b){
        max=a;
    }else
    {
        max=b;
    }
    printf("%d",max);*/

    max=(a>b)?a:b;  // Conditional Operator.
    printf("%d",max);
}

int main()
{
    int num,num1;
    scanf("%d%d",&num,&num1);
    Maximum(num,num1);
}
