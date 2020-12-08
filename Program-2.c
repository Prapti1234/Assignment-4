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
        printf("All even numbers from %d to %d are: ",l,u);
        fun(l,u);
        printf("\nAll odd numbers from %d to %d are: ",l,u);
        fun(l+1,u);
    }
    else
    {
        printf("All even numbers from %d to %d are: ",l,u);
        fun(l+1,u);
        printf("\nAll odd numbers from %d to %d are: ",l,u);
        fun(l,u);
    }
    return 0;
}

void fun(int l, int u)
{
    if(l> u)
        return;
    
    printf("%d, ", l);
    fun(l + 2, u);
}