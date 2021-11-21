#include <stdio.h>
#include <math.h>
#define PI 3.14
int main(){
	int a;
	printf("Enter a number to perform math operations\n");
	scanf("%d",&a);
	float sin_num = sin(PI*a);
	float cos_num = cos(PI*a);
	float log_num = log(a);
	float tan_num = tan(PI*a);
	float sqrt_num = sqrt(a);
	int sqr_num = pow(a,2);
	int cube_num = pow(a,3);
	printf("\nSin = %f , Cos = %f , Tan = %f , Log = %f \nSquare Root = %f , Square = %d , Cube = %d ",sin_num,cos_num,tan_num,log_num,sqrt_num,sqr_num,cube_num);
	return 0;
}
