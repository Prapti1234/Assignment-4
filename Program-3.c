#include <stdio.h>
int fun();
int s=0,n,i=1;
int main()
{
    printf("Enter the upper limit: ");
    scanf("%d", &n);
    printf("Sum of natural numbers from 1 to %d = %d", n, fun());
    return 0;
}

int fun()
{
    if(i>n)
    {
        return s;
    }
    else
    {
        s=s+i;
        i++;
        fun();
    }
}