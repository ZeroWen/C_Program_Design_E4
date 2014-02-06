#include <stdio.h>
int main(){
	int a,b,c,d;
	int max_3(int a,int b,int c);
	printf("Please input a,b,c:\n");
	scanf("%d,%d,%d",&a,&b,&c);
	d=max_3(a,b,c);
	printf("max is %d\n",d);
	return 0;
}
// get the biggest num of three
int max_3(int a,int b,int c){
	int z;
	int max_2(int a,int b);
	z=max_2(a,b);
	z=max_2(z,c);
	return(z);
}
//get a bigger num of two
int max_2(int x,int y){
	if(x>y)return(x);
	else return(y);
}