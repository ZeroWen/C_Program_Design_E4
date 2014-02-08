#include <stdio.h>
int i;
int main(){
	int a,b;
	int low(int,int),high(int,int);
	printf("Please input two numbers:");
	scanf("%d,%d",&a,&b);
	printf("The lowest common multiple of %d and %d is %d.\n",a,b,low(a,b));
	printf("The greatest common divisor of %d and %d is %d.\n",a,b,high(a,b));
	return 0;
}
int high(int x,int y){
	int low(int,int);
	return(x*y/low(x,y));
}
int low(int x,int y){
	for(i=1;i%x!=0||i%y!=0;i++){}
	return(i);
}