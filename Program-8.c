#include <stdio.h>
int fact(int );
int main()
{
    int n, f;
    printf("Enter a number to find nth fibonacci term: ");
    scanf("%d", &n);
    f = fact(n); 
    printf("The fibonacci term of %d is %d ", n,f);
    return 0;
}
int a=0,b=1,i=1,c;
int fact(int n)
{
    
    if(n == 0)
        return 0;
    if(n==1)    
        return 1;
     if(i==n)
        return c;
    c=a+b;
    a=b;
    b=c;
    i++;
    fact(n);
}