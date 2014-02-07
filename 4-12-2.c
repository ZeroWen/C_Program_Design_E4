#include <stdio.h>
#include <math.h>
int main(){
	int x,y,h,sign;
	int radius(int,int);
	printf("Please input the coordinate[example:2,2]:");
	scanf("%d,%d",&x,&y);
	sign=radius(x,y);
	if(sign==1)
		printf("The height of the building is 10m.\n");
	else
		printf("The height of the building is 0m.\n");
}
int radius(int x,int y){		//计算输入坐标到四个圆塔圆心的距离，并返回1或0来表示是否在圆塔范围内
	if(sqrt((2-x)*(2-x)+(2-y)*(2-y))<=1){
		return 1;
	}
	else if(sqrt((-2-x)*(-2-x)+(2-y)*(2-y))<=1){
		return 1;
	}
	else if(sqrt((-2-x)*(-2-x)+(-2-y)*(-2-y))<=1){
		return 1;
	}
	else if(sqrt((2-x)*(2-x)+(-2-y)*(-2-y))<=1){
		return 1;
	}
	else return 0;
}