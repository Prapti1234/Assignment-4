#include <stdio.h>
#include <math.h>
int reverse(int );
int c=0;
int main()
{
    int n, rev,t;
    printf("Enter a number: ");
    scanf("%d", &n);
    t=n;
    while(t>0)
    {
        t=t/10; 
        c++;
    }
    rev = reverse(n); 
    if(n==rev)
        printf(" %d is a palindrome number", n);
    else
      printf(" %d is not a palindrome number", n);
    return 0;
}
int s=0;
int reverse(int n)
{
    
    if(n == 0)
        return s;
    int d=n%10;
    s=s+d*pow(10,c-1);
    n=n/10;
    c--;
    reverse(n);
}