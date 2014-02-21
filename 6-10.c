#include <stdio.h>
int main(){
	int i,j,upp,low,dig,spa,oth;		//upp-->大写,low-->小写,dig-->数字,spa-->空格,oth-->其他
	char text[3][80];
	upp=low=dig=spa=oth=0;
	for(i=0;i<3;i++){
		printf("please input line %d:\n",i+1);
		gets(text[i]);
		for(j=0;j<80 && text[i][j]!='\0';j++){
			if (text[i][j]>='A'&& text[i][j]<='Z')
				upp++;
			else if (text[i][j]>='a' && text[i][j]<='z')
				low++;
			else if(text[i][j]>='0' && text[i][j]<='9')
				dig++;
			else if(text[i][j]==' ')
				spa++;
			else
				oth++;
		}
	}
	printf("\nupper case: %d\nlower case: %d\ndigit     : %d\nspace     : %d\nother     : %d\n",upp,low,dig,spa,oth);
	return 0;
}