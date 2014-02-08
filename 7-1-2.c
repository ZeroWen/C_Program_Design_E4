#include <stdio.h>
int main(){
	int high(int,int);
	int low(int,int,int);
	int u,v,h,l;
	printf("Please input two numbers:");
	scanf("%d,%d",&u,&v);
	h=high(u,v);
	l=low(u,v,h);
	printf("The lowest common multiple is %d\n",l);
	printf("The greatest common divisor is %d\n",h);
	return 0;
}
int high(int x,int y){
	int t,r;
	if(y>x){
		t=x;
		x=y;
		y=t;
	}
	while((r=x%y)!=0){
		x=y;
		y=r;
	}
	return(y);
}
int low(int x,int y,int h){
	return(x*y/h);
}