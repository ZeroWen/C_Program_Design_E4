#include <stdio.h>
int main(){
	char c;
	int letters=0,spaces=0,digits=0,other=0;
	printf("Please input a scentence:\n");
	while((c=getchar())!='\n'){
		if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
			letters++;
		else if (c==' ')
			spaces++;
		else if (c>='0' && c<='9')
			digits++;
		else
			other++;
	}
	printf("Letters:%d\nSpaces:%d\nDigits:%d\nOther:%d\n",letters,spaces,digits,other);
	return 0;
}