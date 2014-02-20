#include <stdio.h>
#include <string.h>
int main(){
	void reverse(char string1[],char string2[]);
	char string1[100];
	char string2[100];
	printf("Please input a character string:\n");
	scanf("%s",string1);
	reverse(string1,string2);
	printf("The reverse string is:%s\n",string2);
	return 0;
}
void reverse(char string1[],char string2[]){
	int i,j;
	for(i=strlen(string1),j=0;i>=0;i--,j++)
		string2[j]=string1[i-1];
}