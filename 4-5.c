#include <stdio.h>
#include <math.h>
// #define limit 1000		//定义常量
int main(){
	int a,b;
	const int limit=1000;		//定义常变量
	printf("Please input a number(<%d):",limit);
	scanf("%d",&a);
	while(a>=limit){
		printf("Please input a number(<%d):",limit);
		scanf("%d",&a);
	}
	b=sqrt(a);
	printf("Its sqrt is %d\n",b);
	return 0;
}