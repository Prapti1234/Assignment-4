#include<stdio.h>

int fun(int, int);  

int main()
{
    int a, b, lcm;
    printf("Enter 2 integers to find LCM of:");
    scanf("%d%d", &a, &b);
    lcm = fun(a,b);    
    printf("LCM of %d and %d is: %d", a, b, lcm);
    return 0;
}

int fun(int a, int b) 
{
    static int t = 1;    
    if(t%a == 0 && t%b == 0)
    {
        return t;
    }
    else
    {
        t++;
        fun(a,b);
        return t;
    }
}
