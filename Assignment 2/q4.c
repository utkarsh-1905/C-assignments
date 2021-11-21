#include <stdio.h>
int main()
{
    int num = 10,sum=5;
    int s=sum+=num;
    int diff=sum-=num;
    int pro=sum*=num;
    int q=num/=sum;
    printf("%d %d %d %d",s,diff,pro,q);
    return 0;
}