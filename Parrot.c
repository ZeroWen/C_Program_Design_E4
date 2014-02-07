#include <stdio.h>
int main(){
	printf("I am a parrot!\n");
	char c;
	for(;(c=getchar())!=EOF;)
		printf("%c",c);
	putchar('\n');
	return 0;
}