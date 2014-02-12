#include <stdio.h>
char str[200];
int main(){
	void connect_str(char str1[],char str2[]);
	char str1[100],str2[100];
	printf("Please input the first string:");
	scanf("%s",str1);
	printf("Please input the second string:");
	scanf("%s",str2);
	connect_str(str1,str2);
	printf("The new string is %s\n",str);
	return 0;
}
void connect_str(char str1[],char str2[]){
	int i,t;
	for(i=0;str1[i]!='\0';i++){
		str[i]=str1[i];
		t=i;
	}
	for(i=0;str2[i]!='\0';i++)
		str[t+i+1]=str2[i];
}