#include<stdio.h>
int findMax(int x[],int n)
{
    int i,max;
    max=x[0];
    for(i=1;i<n;++i){
        if(max<x[i]){
            max=x[i];
        }
    }
    return max;
}

int main()
{
    int a,b;
    printf("Input the number of a and b:");

    scanf("%d%d",&a,&b);
    int A[10],B[10];
    int i;

    printf("Input the 1st array:");
    for(i=0;i<a;++i){
        scanf("%d",&A[i]);
    }
    printf("Input the 2nd array:");
    for(i=0;i<b;++i){
        scanf("%d",&B[i]);
    }

    printf("Print the 1st and 2nd array:\n");
    for(i=0;i<a;++i){
        printf("%d ",A[i]);
    }
    printf("\n");
    for(i=0;i<b;++i){
        printf("%d ",B[i]);
    }
    printf("\n");

    int r;
    r=findMax((A),a);
    printf("%d\n",r);
    r=findMax((B),b);
    printf("%d\n",r);

    return 0;



}

