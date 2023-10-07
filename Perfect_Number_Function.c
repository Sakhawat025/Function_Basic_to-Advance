#include<stdio.h>

int Perfect_N(int n)
{
    int num,s=0;
    num=n;
    for(int i=1;i<num;++i){
        if(num%i==0){
            s+=i;
        }
    }
    return (n==s);
}


int main()
{
    int n;
    scanf("%d",&n);
    if(Perfect_N(n)){
        printf(" The %d is a Perfect number.\n", n);
    }else
    {
        printf(" The %d is not a Perfect number.\n", n);
    }

    return 0;
}
