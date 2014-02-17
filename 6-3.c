#include <stdio.h>
int main(){
	int a[3][3];
	int i,j,sum=0;
	printf("Please input 9 numbers:\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
		sum=sum+a[i][i];
	printf("The sum of elements on the diagonal of the matrix is:%d\n",sum);
	return 0;
}