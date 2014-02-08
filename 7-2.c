#include <stdio.h>
#include <math.h>
double x1,x2,realpart,imagpart;
int main(){
	double a,b,c,delta;
	void negative(double,double,double);
	void zero(double,double);
	void positive(double,double,double);
	printf("Please input a,b,c:");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	printf("The equation ");
	if(fabs(a)<=1e-6){
		printf("is not a quadratic\n");
	}
	else{
		delta=b*b-4*a*c;
		if(delta>0){
			positive(a,b,delta);
			printf("has distinct real roots:\nx1=%5.2f\nx2=%5.2f\n",x1,x2);
		}
		else if(delta<0){
			negative(a,b,delta);
			printf("has two complex roots:\nx1=%5.2f+%5.2fi\nx2=%5.2f-%5.2fi\n",realpart,imagpart,realpart,imagpart);
		}
		else{
			zero(a,b);
			printf("has two equal roots:\nx1=x2=%5.2f\n",x1);
		}
	}
	return 0;
}
void positive(double a,double b,double delta){
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);
}
void negative(double a,double b,double delta){
	realpart=-b/(2*a);
	imagpart=sqrt(-delta)/(2*a);
}
void zero(double a,double b){
	x1=x2=-b/(2*a);
}