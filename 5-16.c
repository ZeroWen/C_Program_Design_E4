#include <stdio.h>
int main(){
	int i,j,k;		//i为行数,j为列数
	//输出上半部分
	for (i=0;i<=3;i++){
		for (j=0;j<=2-i;j++)
			printf(" ");
		for (k=0;k<=2*i;k++)
			printf("*");
		putchar('\n');
	}
	//输出下半部分
	for (i=0;i<=2;i++){
		for (j=0;j<=i;j++)
			printf(" ");
		for (k=0;k<=4-2*i;k++)
			printf("*");
		putchar('\n');
	}
	return 0;
}