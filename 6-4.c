#include <stdio.h>
#define N 10
int main(){
	int a[N]={10,20,30,40,50,60,70,80,90};
	int n,i,j,t;
	printf("The orginal array is:\n");		//输出原数组
	for(i=0;a[i]!='\0';i++)
		printf("%d ",a[i]);
	putchar('\n');
	printf("Please input a number:");		//输入数字
	scanf("%d",&n);
	for(i=0;i<N;i++)
		if(n<a[i]){
			for(j=N-2;j>=i;j--){
				a[j+1]=a[j];
			}
			a[i]=n;
			break;
		}
		else
			a[N-1]=n;
	printf("The new array is:\n");		//输出新数组
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	putchar('\n');
	return 0;
}