#include <stdio.h>
int main(){
	int i;		//den为分母，num为分子，i为计数器
	double sum=0.0,den=1,num=2,temp;
	for(i=1;i<=20;i++){
		sum=sum+num/den;
		temp=num;
		num=temp+den;
		den=temp;
	}
	printf("The sum of first 20 items is %10.7f\n",sum);
}