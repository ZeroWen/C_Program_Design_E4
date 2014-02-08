#include <stdio.h>
int main(){
	int x=1,i;
	for(i=1;i<=9;i++){
		x=(x+1)*2;
	}
	printf("There were %d peaches on the first day.\n",x);
}