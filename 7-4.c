#include <stdio.h>
int i,j;
int main(){
	int a[3][3],b[3][3];
	void convert(int orginal[3][3],int converted[3][3]);
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	printf("The orginal array is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d ",a[i][j]);
		putchar('\n');
	}
	convert(a,b);
	printf("The converted array is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d ",b[i][j]);
		putchar('\n');
	}
	return 0;
}
void convert(int orginal[3][3],int converted[3][3]){
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			converted[j][i]=orginal[i][j];
}