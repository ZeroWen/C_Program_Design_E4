#include <stdio.h>
int main(){
	int sum_day(int month,int day);
	int leap(int year);
	int year,month,day,days;
	printf("input date(year,month,day):");
	scanf("%d,%d,%d",&year,&month,&day);
	printf("%d/%d/%d ",year,month,day);
	days=sum_day(month,day);
	if(leap(year)&&month>=3)
		days=days+1;
	printf("is the %dth day in this year.\n",days);
	return 0;
}
//函数sum_day:计算日期
int sum_day(int month,int day){
	int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	for(i=1;i<month;i++)
		day+=day_tab[i];
	return(day);
}
//函数leap:判断是否为闰年
int leap(int year){
	int leap;
	leap=year%4==0&&year%100!=0||year%400==0;
	return(leap);
}
/*
#include <stdio.h>
int main(){
	int year,month,day;
	int count_day(int,int,int);
	printf("Please enter the year:");
	scanf("%d",&year);
	printf("Please enter the month:");
	scanf("%d",&month);
	printf("Please enter the day:");
	scanf("%d",&day);
	printf("%d.%d is day %d of the year %d.\n",month,day,count_day(year,month,day),year);
	return 0;
}
int count_day(int year,int month,int day){
	int num;
	switch(month){
		case 1:num=day;break;
		case 2:num=31+day;break;
		case 3:num=59+day;break;
		case 4:num=90+day;break;
		case 5:num=120+day;break;
		case 6:num=151+day;break;
		case 7:num=181+day;break;
		case 8:num=212+day;break;
		case 9:num=243+day;break;
		case 10:num=273+day;break;
		case 11:num=304+day;break;
		case 12:num=334+day;break;
	}
	if((year%400==0||(year%4==0&&year%100!=0))&&month>2){
		num+=1;
		return(num);
	}
	else
		return(num);
}
*/