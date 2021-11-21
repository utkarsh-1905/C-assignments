#include<stdio.h>
#include<math.h>

int main(){
	printf("Enter coefficiants in the quadratic equation = ax^2+bx+c=0\n");
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	
	float root1=0;
	float root2=0;
	
	float d = sqrt(((b*b)-(4*a*c)));
		
	if(pow(b,2)>(4*a*c)){
		root1=(-b+d)/(2*a);
		root2=(-b-d)/(2*a);
		printf("First root = %f , Second Root = %f ",root1,root2);
	}
	else{
		printf("no roots");
	}

	return 0;
}
