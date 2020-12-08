#include <stdio.h>
int fun(int );
int main()
{
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = fun(n); 
    printf("The sum of digits of %d is %d ", n,sum);
    return 0;
}
int s=0;
int fun(int n)
{
    
    if(n == 0)
        return s;
    int d=n%10;
    s=s+d;
    n=n/10;
    fun(n);
}