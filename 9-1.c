#include <stdio.h>
#include <time.h>
struct Date{
	int year;
	int month;
	int day;
};
int main(){
	int count(int year,int month,int day);
	int i,n,day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	struct Date today;
	time_t now;
	time(&now);
	struct tm *tpointer;
	tpointer=localtime(&now);
	today.year=tpointer->tm_year+1900;
	today.month=tpointer->tm_mon+1;
	today.day=tpointer->tm_mday;
	n=today.day;
	for(i=1;i<today.month;i++)
		n+=day_tab[i];
	if((today.year%400==0)&&(today.year%4==0||today.year%100!=0)&&today.month>=3)
		n+=1;
	printf("Today(%d/%d/%d) is the %dth day in this year.",today.year,today.month,today.day,n);
	return 0;
}
