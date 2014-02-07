#include <stdio.h>
int main(){
	int m,n,p,r,t;
	printf("Please input m,n:");
	scanf("%d,%d",&m,&n);
	if (n<m){
		t=n;
		n=m;
		m=t;
	}
	p=n*m;
	while(m!=0){
		r=n%m;
		n=m;
		m=r;
	}
	printf("The highest common divisor of m and n is %d\n",n);
	printf("The lowest common multiple of m and n is %d\n",p/n);
	return 0;
}