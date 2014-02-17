#include <stdio.h>
int main(){
	int a[10],i,j,t;
	printf("Please input ten numbers:");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		for(j=i+1;j<10;j++)
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	putchar('\n');
	return 0;
}
/*冒泡排序*/
/*#include <stdio.h>
int main(){
	int a[10],i,j,t;
	printf("Please input ten numbers:");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	putchar('\n');
	return 0;
}*/