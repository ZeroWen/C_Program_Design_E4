#include <stdio.h>
int d1,d2,d3,d4;
int main(){
	int a;
	void num_space(int);
	printf("Please input a 4-digit number:");
	scanf("%d",&a);
	while(a<1000||a>9999){
		printf("Error!\aPlease input a 4-digit number:");
		scanf("%d",&a);
	}
	num_space(a);
	printf("%d %d %d %d\n",d1,d2,d3,d4);
	return 0;
}
void num_space(int a){
	d1=a/1000;
	d2=(a-1000*d1)/100;
	d3=(a-1000*d1-100*d2)/10;
	d4=a%10;
}
/*
#include <stdio.h>
#include <string.h>
int main(){
	char str[80];
	void insert(char []);
	printf("input four digits:");
	scanf("%s",str);
	insert(str);
	return 0;
}
void insert(char str[]){
	int i;
	for (i=strlen(str);i>0;i--){
		str[2*i]=str[i];
		str[2*i-1]=' ';
	}
	printf("output:\n%s\n",str);
}
*/