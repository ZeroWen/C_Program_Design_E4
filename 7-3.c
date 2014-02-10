#include <stdio.h>
int main(){
	int prime(int);
	int a;
	printf("Please input an integer number(>1):");
	scanf("%d",&a);
	while(a<=1){
		printf("Error!\aPlease input an integer number(>1):");
		scanf("%d",&a);
	}
	if(prime(a))
		printf("%d is a prime.\n",a);
	else
		printf("%d is not a prime.\n",a);
}
int prime(int a){
	int i=2,sign=1;
	if(a!=2)
		for(;i<a;i++)
			if(a%i==0)
				sign=0;
	return(sign);
}