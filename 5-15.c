#include <stdio.h>
#include <math.h>
int main(){
	float fx(float);
	float x0,x1=-10,x2=10,fx0,fx1,fx2;
	fx1=fx(x1);
	fx2=fx(x2);
	do{
		x0=(x1+x2)/2;
		fx0=fx(x0);
		if((fx0*fx1)<0){
			x2=x0;
			fx2=fx0;
		}
		else{
			x1=x0;
			fx1=fx0;
		}
	}while(fabs(fx0)>=1e-5);
	printf("x=%f\n",x0);
	return 0;	
}
float fx(float x){
	float fx;
	fx=((2*x-4)*x+3)*x-6;
	return fx;
}