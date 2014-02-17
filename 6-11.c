#include <stdio.h>
int main(){
	char a[10],i,j;
	for(i=0;i<10;i++,i++){
		a[i]='*';
		a[i+1]=' ';
	}
	for(j=0;j<5;j++){
		for(i=0;i<j;i++)
			printf("  ");
		printf("%s\n",a);
	}
	return 0;
}