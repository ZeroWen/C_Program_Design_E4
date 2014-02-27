#include <stdio.h>
int main(){
	int n;
	void int2char(int n);
	printf("Please input an integer number:");
	scanf("%d",&n);
	int2char(n);
	putchar('\n');
	return 0;
}
void int2char(int n){
	int d[10],i,l;
	char str[10];
	if(n>0){
		for(i=0;n!=0;i++){
			d[i]=n%10;
			n=(n-d[i])/10;
		}
		l=i;
		for(i=0;i<l;i++)
			str[i]=d[l-1-i]+48;
		str[l]='\0';
	}
	else if(n==0)
		str[0]=48;
	else if(n<0){
		putchar('-');
		int2char(-n);
	}
	printf("%s",str);
}