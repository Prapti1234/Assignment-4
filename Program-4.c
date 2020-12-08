#include <stdio.h>
void fun(int , int );

int main()
{
    int l, u;
    printf("Enter the lower limit: ");
    scanf("%d", &l);
    printf("Enter the upper limit: ");
    scanf("%d", &u);
    if (l%2==0)
    {   
        printf("Sum of even numbers from %d to %d are: ",l,u);
        fun(l,u);
        printf("\n Sum of odd numbers from %d to %d are: ",l,u);
        fun(l+1,u);
    }
    else
    {
        printf("Sum of even numbers from %d to %d are: ",l,u);
        fun(l+1,u);
        printf("\nSum of odd numbers from %d to %d are: ",l,u);
        fun(l,u);
    }
    return 0;
}
int s=0;
void fun(int l, int u)
{

    if(l> u)
    {
        printf("%d ", s);
           s=0;
           return;
           
    }
    s=s+l;
    fun(l + 2, u);
}