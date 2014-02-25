#include <stdio.h>
#define N 15
int main(){
	int a[N],n,i,x,y,sign=0;
	printf("Please input %d descending numbers:\n",N);
	for(i=0;i<N;i++)
		scanf();
	printf("Please input a number:");
	scanf("%d",&n);
	if(n<a[0]||n>a[N-1])
		sign=0;
	else if(n==a[0]){
		printf("%d is in the array.\nPosition:%d\n",n,1);
		sign=1;
	}
	else if(n==a[N-1]){
		printf("%d is in the array.\nPosition:%d\n",n,N);
		sign=1;
	}
	else
		for(x=0,y=N-1;x<=y;){
			i=(x+y)/2;
			if(n==a[i]){
				printf("%d is in the array.\nPosition:%d\n",n,i+1);
				sign=1;
				break;
			}
			else if(n>a[i])
				x=i+1;
			else if(n<a[i])
				y=i-1;
			if(x>=y)
				sign=0;
		}
	if(!sign)
		printf("无此数\n");
	return 0;
}
/*
#include <stdio.h>
#define  N 15
int main(){
	int i,number,top,bott,mid,loca,a[N],flag=1,sign;
	char c;
	printf("enter data:\n");
	scanf("%d",&a[0]);
	i=1;
	while(i<N){
		scanf("%d",&a[i]);
		if(a[i]>=a[i-1])
			i++;
		else
			printf("enter this data again:\n");
	}
	printf("\n");
	for(i=0;i<N;i++)
		printf("%5d",a[i]);
	printf("\n");
	while(flag){
		printf("input number to look for:");
		scanf("%d",&number);
		sign=0;
		top=0;            //top是查找区间的起始位置
		bott=N-1;         //bott是查找区间的最末位置
		if((number<a[0])||(number>a[N-1]))  //要查的数不在查找区间内
			loca=-1;        // 表示找不到
		while((!sign)&&(top<=bott)){
			mid=(bott+top)/2;
			if(number==a[mid]){
				loca=mid;
				printf("Has found %d, its position is %d\n",number,loca+1);
				sign=1;
			}
			else if(number<a[mid])
				bott=mid-1;
			else
				top=mid+1;
		}
		if(!sign||loca==-1)
			printf("cannot find %d.\n",number);;
		printf("continu or not(Y/N)?");
		scanf(" %c",&c);
		if(c=='N'||c=='n')
			flag=0;
	}
	return 0;
}
*/
