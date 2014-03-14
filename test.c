/*
 * =====================================================================================
 *
 *       Filename:  test2.c
 *
 *    Description: 互斥 
 *
 *        Version:  1.0
 *        Created:  03/14/14 12:03:49
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (), j.kuo2012@gmail.com
 * =====================================================================================
 */

#include <stdio.h>
int main(){
	int a=1,b=1;
	if(a--)
		b=100;
	else if(a==0)
		b=200;
	else
		b=300;
	printf("a=%d,b=%d",a,b);
	return 0;
}
