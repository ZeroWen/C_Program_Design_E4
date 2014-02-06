#include <stdio.h>
#include <math.h>
int main(){
	int n;
	float p,r;
	r=0.09;
	n=10;
	p=pow(1+r,n);
	printf("p=%f\n",p);
	return 0;
}