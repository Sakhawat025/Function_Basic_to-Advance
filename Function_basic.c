#include<stdio.h>

/*void show()
{
    printf("this is from function\n");
}


int main()
{
    printf("It's main code\n");
    show();
    printf("Back in main function code\n");
}*/

//function without arguments and without return value.

/*void sum()  // Not use argument.
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The sum is %d",a+b);

    // with out return value.
}
int main()
{
    sum();
}*/


// function without argument and with return value.

/*int sum()   // Not use argument.
{
    int a,b;
    scanf("%d%d",&a,&b);
    return a+b;    // with return value.
}

int main()
{
    int result;
    result=sum();
    printf("The sum is %d",result);
}*/

// function with argument and without return value.

/*void sum(int a,int b)   // use argument.
{
    printf("The sum is %d",a+b);

    //with out return value.
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    sum(a,b);
}*/


// function with argument and with return value.

int sum(int a,int b) //use argument.
{
    return a+b;  //with return value
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int result=sum(a,b);
    printf("The sum is %d",result);
}

