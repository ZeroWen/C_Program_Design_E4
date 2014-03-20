/*
 * =====================================================================================
 *
 *       Filename:  SongWriter.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/19/2014 23:14:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jackie Kuo (), j.kuo2012@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define new_song double i,j,k;
#define the_end return 0;
#define start_loop for(;;)
#define repeat for(k=0;k<2;k++)
#define beep(n) for(i=0;i<n;i++)printf("\a");
#define pause(n) for(i=0;i<n;i++)for(j=0;j<200000;j++);
int main(){
	new_song
	start_loop{
		repeat{
			beep(1)
			pause(3)
			beep(1)
			pause(2)
			beep(1)
			pause(6)
			;
		}
	}
	the_end
}
