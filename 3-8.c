#include <stdio.h>
int main(){
	char c1,c2;		//思考 char与int
	printf("请输入c1,c2:");
	c1=getchar();
	c2=getchar();
	putchar(c1);
	putchar('\t');
	putchar(c2);
	printf("\n%c\t%c\n",c1,c2);
	return 0;
}