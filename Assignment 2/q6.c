#include<stdio.h>
#include<math.h>

int main(){
	int a;
	printf("Enter a number to perform left or right shift operations:\n");
	scanf("%d",&a);
	printf("\nEnter the number of bits to shift:\n");
	int bit;
	scanf("%d",&bit);
	
	int ls = a<<bit;
	int rs = a>>bit;
	
	printf("%d %d",ls,rs);
}
