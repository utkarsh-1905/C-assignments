#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers");
    scanf("%d %d",&a,&b);
    int ans = a>b?1:0;
    if(ans==1)
    printf("A is greater than B");
    else
    printf("B is greater than A");
    return 0;
}