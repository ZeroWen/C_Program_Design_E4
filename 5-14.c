#include <stdio.h>
#include <math.h>
int main(){
	double x,x1,f,f1;
	x1=1.5;
	for(;fabs(x1-x)>=1e-5;){
		x=x1;
		f=((2*x-4)*x+3)*x-6;
		f1=(6*x-8)*x+3;
		x1=x-f/f1;
	}
	printf("The root of equation is %f\n",x1);
	return 0;
}