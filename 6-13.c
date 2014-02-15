#include <stdio.h>
int main(){
	char str1[100],str2[100],str[200];
	int i,t;
	printf("Please input a character string:");
	scanf("%s",str1);
	printf("Please input another character string:");
	scanf("The new string is:%s",str2);
	for(i=0;str1[i]!='\0';i++)
		str[i]=str1[i];
	t=i;
	for(i=0;str2[i]!='\0';i++)
		str[t+i]=str2[i];
	printf("%s\n",str);
	return 0;
}