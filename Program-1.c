#include <stdio.h>
void fun(int n);

int main()
{
    int n;
    printf("Enter the upper limit: ");
    scanf("%d", &n);
    printf("All natural numbers from 1 to %d are: ", n);
    fun(n);
    return 0;
}

void fun(int n)
{
    int i;
    for(i=1;i<=n;i++)
       printf("%d, ",i);
}