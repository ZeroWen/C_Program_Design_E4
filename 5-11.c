#include <stdio.h>
int main(){
	double h=100,total;		//h为每次高度，total为共经过的距离
	int i;		//i是计数器
	total=h;
	h=h/2;
	for(i=1;i<10;i++){
		total=total+h*2;
		h=h/2;
	}
	printf("The total distance is %f.\nThe 10th height is %f.\n",total,h);
	return 0;
}