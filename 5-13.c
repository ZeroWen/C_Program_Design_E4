#include <stdio.h>
#include <math.h>
int main(){
	float a,x,x1;
	printf("Please input a positive number:");
	scanf("%f",&a);
	x=a/2;
	x1=(x+a/x)/2;
	for(;fabs(x1-x)>=1e-5;){
		x=x1;
		x1=(x+a/x)/2;
	}
	printf("The square root of %f is %f\n",a,x1);
	return 0;
}