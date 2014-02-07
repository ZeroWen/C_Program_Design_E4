#include <stdio.h>
#include <math.h>
int main(){
	int sign=1;
	double pi=0.0,n=1.0,term=1.0,i=0.0;
	while(fabs(term)>=1e-6){
		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
		i=i+1;
	}
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	printf("The loop has been executed %10.0f times.",i);
	return 0;
}

//1e-6 i=500000
//1e-8 i=50000000