#include <stdio.h>
#include <string.h>
int main(){
	int letter(char);
	int longest(char []);
	int i;
	char str[100];
	printf("Please input a character string:\n");
	gets(str);
	printf("The longest word is :");
	for(i=longest(str);letter(str[i]);i++)
		printf("%c",str[i]);
	putchar('\n');
	return 0;
}
int letter(char c){
	if ((c>='a' && c<='z')||(c>='A'&&c<='z'))
		return(1);
	else
		return(0);
}
int longest(char string[]){
	int t=0,i,length=0,flag=1,place=0,point;
	for(i=0;i<=strlen(string);i++)
		if(letter(string[i]))
			if(flag){
				point=i;
				flag=0;
			}
			else
				t++;
		else{
			flag=1;
			if(t>=length){
				length=t;
				place=point;
				t=0;
			}
		}
	return(place);
}
