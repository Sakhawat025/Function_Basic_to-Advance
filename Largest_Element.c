#include<stdio.h>
int Lergest_Number(int n)
{
    int L[n];
    for(int i=0;i<n;++i){
        scanf("%d",&L[i]);
    }
    for(int i=0;i<n;++i){
        printf("%d ",L[i]);
    }printf("\n");
    int max;
    max=L[0];
    for(int i=0;i<n;++i){
        if(max<L[i]){
            max=L[i];
        }
    }return max;
}



int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);

    int max=Lergest_Number(n);
    printf("%d max",max);



}
