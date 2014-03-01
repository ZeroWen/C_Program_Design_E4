#include <stdio.h>
int main(){
	int *p,i,a[3][3];
	void trans(int *p);
	printf("Please input a matrix(3 numbers each line):\n");
	for(p=a[0];p<a[0]+9;p++)
		scanf("%d",p);
	p=a[0];
	trans(p);
	printf("The new matrix is:\n");
	for(p=a[0];p<a[0]+9;p++){
		if((p-a[0])%3==0)
			putchar('\n');
		printf("%d ",*p);
	}
	putchar('\n');
	return 0;
}
void trans(int *p){
	int i,j,t;
	for(i=0;i<3;i++)
		for(j=i;j<3;j++){
			t=*(p+3*i+j);
			*(p+3*i+j)=*(p+3*j+i);
			*(p+3*j+i)=t;
		}
}
