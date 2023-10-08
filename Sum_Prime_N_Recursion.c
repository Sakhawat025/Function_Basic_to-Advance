#include <stdio.h>

int prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int sum(int x, int y)
{
    if (x > y)
    {
        return 0;
    }

    if (prime(x))
    {
        return x + sum(x + 1, y);
    }

        return sum(x + 1, y);

}
int main()
{
        int x, y,result;
        scanf("%d %d", &x, &y);

        if (x >= 2)
        {
            result = sum(x, y);
            printf("%d\n",result);
        }
        return 0;
}
