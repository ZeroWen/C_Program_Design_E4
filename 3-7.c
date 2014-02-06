#include <stdio.h>
int main(){
	const float pi=3.1415926;
	float r,h,l,sc,sb,vb,vc;		//l为圆周长，sc为圆面积，sb为圆球表面积，vb为圆球体积，vc为圆柱体积
	printf("请输入圆半径,\nr=");		//Please enter the radius
	scanf("%f",&r);
	printf("请输入圆柱高,\nh=");			//Please enter the height
	scanf("%f",&h);
	l=2*pi*r;
	sc=pi*r*r;
	sb=4*pi*r*r;
	vb=3.0/4.0*pi*r*r*r;
	vc=pi*r*r*h;
	printf("圆周长为：	%6.2f\n",l);
	printf("圆面积为：	%6.2f\n",sc);
	printf("圆球表面积为：	%6.2f\n",sb);
	printf("圆球体积为：	%6.2f\n",vb);
	printf("圆柱体积为：	%6.2f\n",vc);
	return 0;
}