#include<stdio.h>

void odd_even(int n)
{
    /*if(n%2==0){
        printf("Even\n");
    }else{
        printf("Odd\n");
    }*/


    /*if(n/2*2==n){
        printf("Even\n");
    }else{
        printf("Odd\n");
    }*/


    if(n&1){
        printf("Odd\n");
    }else{
        printf("Even\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    odd_even(n);
}
