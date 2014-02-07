#include <stdio.h>
int main(){
	int a,b,c,temp,max;
	printf("Please input a,b,c:");
	scanf("%d,%d,%d",&a,&b,&c);
	temp=(a>b)?a:b;                     /*将a和b中的大者存入temp中*/
	max=(temp>c)?temp:c;               /*将a和b中的大者与c比较,取最大者*/
	printf("max is %d\n",max);
	return 0;
} 