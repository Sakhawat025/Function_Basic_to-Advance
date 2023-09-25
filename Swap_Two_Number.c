#include<stdio.h>
void Swap_Number(int a,int b)
{
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d%d",a,b);
}

int main()
{
    int n,n1;
    scanf("%d%d",&n,&n1);
    Swap_Number(n,n1);
}
