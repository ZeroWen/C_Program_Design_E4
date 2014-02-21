#include <stdio.h>
int main(){
	char str1[100],str2[100];
	int i,n=0;
	printf("Please input the first string:\n");
	gets(str1);
	printf("Please input the second string:\n");
	gets(str2);
	for(i=0;(str1[i]!='\0')||(str2[i]!='\0');i++){
		if(str1[i]==str2[i])
			continue;
		else if(str1[i]!=str2[i]){
			n=str1[i]-str2[i];
			break;
		}
	}
	printf("The result is %d\n",n);
	return 0;
}