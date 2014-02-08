#include <stdio.h>
int l,h;
int main(){
	void high(int,int);
	void low(int,int);
	int u,v;
	printf("Please input two numbers:");
	scanf("%d,%d",&u,&v);
	high(u,v);
	low(u,v);
	printf("The lowest common multiple is %d\n",l);
	printf("The greatest common divisor is %d\n",h);
	return 0;
}
void high(int x,int y){
	int t,r;
	if (y>x){
		t=x;
		x=y;
		y=t;
	}
	while((r=x%y)!=0){
		x=y;
		y=r;
	}
	h=y;
}
void low(int x,int y){
	l=x*y/h;
}