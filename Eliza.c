#include <stdio.h>
#include <string.h>
int main(){
	char cmd[100];
	void help();
	void run();
	void error();
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
