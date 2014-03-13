#include <stdio.h>
#include <time.h>
struct Date{
	int year;
	int month;
	int day;
};
int main(){
	int days(int year,int month,int day);
	struct Date today;
	time_t now;
	time(&now);
	struct tm *tpointer;
	tpointer=localtime(&now);
	today.year=tpointer->tm_year+1900;
	today.month=tpointer->tm_mon+1;
	today.day=tpointer->tm_mday;
	printf("Today(%d/%d/%d) is the %dth day in this year.",today.year,today.month,today.day,days(today.year,today.month,today.day));
	return 0;
}
int days(int year,int month,int day){
	int i,day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=1;i<month;i++)
		day+=day_tab[i];
	if((year%400==0)&&(year%4==0||year%100!=0)&&month>=3)
		day+=1;
	return (day);
}
