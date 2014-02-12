#include <stdio.h>
int main(){
	void vowel(char str1[],char str2[]);
	char str1[100];
	char str2[100];
	printf("Please input a character string:\n");
	scanf("%s",str1);
	vowel(str1,str2);
	printf("The vowel letters in the string: %s\n",str2);
	return 0;
}
void vowel(char str1[],char str2[]){
	int i,j=0;
	for(i=0;str1[i]!='\0';i++){
		if(str1[i]=='a'||str1[i]=='e'||str1[1]=='i'||str1[1]=='o'||str1[1]=='u'||str1[1]=='A'||str1[1]=='E'||str1[1]=='I'||str1[1]=='O'||str1[1]=='U'){
			str2[j]=str1[i];
			j=j+1;
		}
	}
}