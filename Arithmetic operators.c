#include<stdio.h>
int main()
{
    int a=0,b=0,add=0,sub=0,mult=0,div=0,rem=0;
    printf("Enter the no :");
    scanf("%d %d", &a,&b);
    add=a+b;
    sub=a-b;
    mult=a*b;
    div=a/b;
    rem=a%b;
    printf("add=%d, sub=%d, mult=%d, div=%d, rem=%d",add,sub,mult,div,rem);
    return 0;
}
