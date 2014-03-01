#include <stdio.h>
#define N 10
int main(){
	int n[N];
	void input(int *p);
	void foo(int *p);
	void output(int *p);
	input(n);
	foo(n);
	output(n);
	return 0;
}
void input(int *p){
	int *t;
	printf("Please input %d numbers:\n",N);
	for(t=p;t<p+N;t++)
		scanf("%d",t);
}
void foo(int *p){
	int *t,*min,*max,temp;
	min=max=p;
	for(t=p;t<p+N;t++){
		if(*t<*min)
			min=t;
		else if(*t>*max)
			max=t;
	}
	temp=p[0];
	p[0]=*min;
	*min=temp;
	if(max==p)
		max=min;
	temp=p[9];
	p[9]=*max;
	*max=temp;
}
void output(int *p){
	int *t;
	printf("The new order is:\n");
	for(t=p;t<p+N;t++)
		printf("%d ",*t);
	putchar('\n');
}