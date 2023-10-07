/* C to check Armstrong and Perfect numbers using the function.*/

#include<stdio.h>

int Armstrong_N(int n)
{
    int r,s=0,num;
    num=n;
    while(num!=0)
    {
        r=num%10;
        s=s+r*r*r;
        num=num/10;
    }
    return(n==s);
}
int main()
{
    int n;
    scanf("%d",&n);
    if(Armstrong_N(n))
    {
        printf("The %d is an Armstrong number.\n", n);
    }
    else
    {
        printf("The %d is not an Armstrong number.\n", n);
    }

    return 0;
}

