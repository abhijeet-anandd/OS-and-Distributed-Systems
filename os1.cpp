//Exec
//-------------------------------------------------------------DEMO FILE------------------------------------------------------------
#include<stdio.h>
#include <unistd.h>
int main(int argv,char *args[])
{
	printf("This is a program called by execv from %s\n",args[1]);
	return 0;
}
//--------------------------------------------------------------MAIN FILE-------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argv,char *args[])
{
	char *message[]={"./1bDemot",args[0],NULL};
	execv(message[0],message);
	printf("\nThis should not print\n");
	printf("This shold also not print\n");
	return 0; 
}