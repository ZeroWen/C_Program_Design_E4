#include <stdio.h>
int main(){
	int x,n;
	int legendre(int x,int n);
	printf("Please input x:");
	scanf("%d",&x);
	printf("Please input n:");
	scanf("%d",&n);
	while(n<0){
		printf("Error!\aPlease input n(n>=0):");
		scanf("%d",&n);
	}
	printf("The result is %d\n",legendre(x,n));
	return 0;
}
int legendre(int x,int n){
	int p;
	if(n==0)
		p=1;
	else if(n==1)
		p=x;
	else if(n>=1)
		p=(2*n-1)*x-legendre(x,n-1)-(n-1)*legendre(x,n-2)/n;
	return(p);
}