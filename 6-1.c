#include <stdio.h>
int main(){
	int i,j,prime[100],n=1;
	const int limit=100;
	prime[0]=2;
	for(i=3;i<limit;i++)
		for(j=2;j<i;j++)
			if(i%j==0)
				break;
			else if(j==i-1){
				prime[n]=i;
				n++;
			}
	printf("Prime numbers in %d are:",limit);
	for(i=0;prime[i]!='\0';i++)
		printf("%d ",prime[i]);
	putchar('\n');
	return 0;
}