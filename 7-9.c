#include <stdio.h>
int letter=0,num=0,space=0,other=0;
int main(){
	char str[100];
	void count(char str[]);
	printf("Please input a character string:\n");
	gets(str);
	//scanf("%s",str);
	count(str);
	printf("Letters:%d\nNumbers:%d\nSpaces:%d\nOthers:%d\n",letter,num,space,other);
	return 0;
}
void count(char str[]){
	int i;
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='0'&&str[i]<='9')
			num=num+1;
		else if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
			letter=letter+1;
		else if(str[i]==32)
			space=space+1;
		else
			other=other+1;
	}
}