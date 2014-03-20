#include <stdio.h>
#include <string.h>
int main(){
	char cmd[100];
	void help();
	void run();
	void error();
	void welcome();
	welcome();
	printf("Local System Startup\n");
	printf("Bootup Complete\n");
	printf("2014 all rights reserved\n");
	printf("type 'help' for help\n");
	for(;;){	
		printf("localhost> ");
		scanf("%s",cmd);
		if(!strcmp(cmd,"help")){
			help();
		}
		if(!strcmp(cmd,"exit")){
			break;
		}
		if(!strcmp(cmd,"run")){
			run();
		}
		else
			error();
	}
	return 0;
}
void welcome(){
	printf("\n\n********* Hacker GO *********\n\n\n");
	printf("Greetings,\n  You don't know who I am but I have been watching you for some time. Do not be alarmed, I am not connected with the authorities. I would like to hire you for something very important. I need to locate some information contained within the computer systems of an organization, and I believe you may know how to access it. \n  Accept my offer, and you will be generously rewarded.\n\nYour Future Employer\n\n  One thing more... I would be very disappointed if you were to decline my offer; I strongly suggest you accept it.\n\nPress any key to accept the offer......\n");
	getchar();
}
void help(){
	printf("localhost help menu:\n");
	printf(" help         display a list of system commands\n");
	printf(" exit         log out and shut down your localhost\n");
	printf(" run          run the employer's hack routine\n");
}
void error(){
	printf("command not found\n");
}
void run(){
	void hackruntine();
	printf("running the hack routine...\n");
	printf("successfully launched\n");
	printf("type 'help' for help\n");
}
