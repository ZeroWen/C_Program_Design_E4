#include <stdio.h>
int main(){
	int score,level;
	char grade;
	printf("Please input the score:");
	scanf("%d",&score);
	while(score>100||score<0){
		printf("Error!Please input again:\a");		//print error info
		scanf("%d",&score);
	}
	level=score/10;
	switch(level){
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:grade='E';break;
		case 6:grade='D';break;
		case 7:grade='C';break;
		case 8:grade='B';break;
		case 9:
		case 10:grade='A';break;
	}
	printf("The grade is %c\n",grade);
	return 0;
}