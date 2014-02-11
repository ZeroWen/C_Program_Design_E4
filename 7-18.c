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