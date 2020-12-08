#include <stdio.h>
int fun();
int i, n1, n2;
int main()
{
    printf("Enter two numbers to find their HCF:  ");
    scanf("%d%d", &n1, &n2);
    printf("HCF of %d and %d is %d\n", n1, n2, fun());
    return 0;
}
int i=1,hcf=1;
int fun()
{    int min;
    if(n1<n2)
       min=n1;
     else
       min=n2;
     if(i>min)
        return hcf;
        
     if(n1%i==0 && n2%i==0)
            hcf = i;
            
        
        i++;
        fun();
}