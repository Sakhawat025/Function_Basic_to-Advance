#include<stdio.h>
int prime(int n)
{
    for(int i=2;i<=n/2;++i){
        if(n%i==0){
            return 0;
        }
    }return 1;

}

int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
    if(prime(n)==1){
        printf("The Number %d is a prime number.\n",n);
    }else
    {
        printf("The Number %d is a prime number.\n",n);
    }

    return 0;
}
