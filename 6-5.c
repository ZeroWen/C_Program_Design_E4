#include <stdio.h>
#define N 5
int main(){
	int i,l,t,a[5];
	printf("Please input an array(5 numbers):");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	l=N-1;
	for(i=0;i<(l+1)/2;i++){
		t=a[i];
		a[i]=a[l-i];
		a[l-i]=t;
	}
	printf("New array:");
	for(i=0;a[i]!='\0';i++)
		printf("%d ",a[i]);
	putchar('\n');
	return 0;
}