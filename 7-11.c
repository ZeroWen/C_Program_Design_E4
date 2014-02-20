#include <stdio.h>
#define N 10
int main(){
	char str[N];
	void sort(char str[]);
	printf("Please input %d characters:\n",N);
	scanf("%s",str);
	sort(str);
	printf("The sorted characters:%s\n",str);
	return 0;
}
void sort(char str[]){
	int i,j;
	char t;
	for(i=0;i<N-1;i++)
		for(j=0;j<N-1-i;j++)
			if(str[j]>str[j+1]){
				t=str[j];
				str[j]=str[j+1];
				str[j+1]=t;
			}
}