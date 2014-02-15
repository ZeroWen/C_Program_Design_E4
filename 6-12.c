#include <stdio.h>
int main(){
	int i;
	char code[100],orginal[100];
	printf("Please input the code:");
	scanf("%s",code);
	for(i=0;code[i]!='\0';i++){
		if(code[i]>='A'&&code[i]<='Z')
			orginal[i]=155-code[i];
		else if(code[i]>='a'&&code[i]<='z')
			orginal[i]=219-code[i];
		else
			orginal[i]=code[i];
	}
	printf("The code is:%s\nThe orginal is:%s\n",code,orginal);
	return 0;
}