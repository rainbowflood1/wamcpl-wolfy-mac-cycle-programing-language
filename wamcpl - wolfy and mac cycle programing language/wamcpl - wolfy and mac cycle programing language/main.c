#include <assert.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <process.h>
#include <sys/types.h>

int main(void) {

	char print[500];
	char ostime[500];
	char help[500];
	char cmd[1000];
	char open_app[1000];
	char ostimecom = "wam.os.time";
	char helpcom = "/help";
	int line = 0;
	int math = 0;
	int math1 = 0;
	int answer = 0;
	int print_bool = 0;
	int var = 0;
	int custom_var = 0;

	time_t t; // not a primitive datatype
	time(&t);

	line = line + 1;
	printf("[%d] ", line);
	printf("Enter a command (wam.print) >>> ");
	scanf("wam.print(%s", print);

	printf("\n");

	line = line + 1;
	printf("[%d] ", line);
	printf("%s", print);

	printf("\n");

	printf("\n");

	line = line + 1;

	printf("[%d] ", line);

	printf("Enter a command (os.time) >>> ");

	scanf("%s", ostime);

	if (ostime == ostimecom) {

		return 0;
	}

	printf("\n%s", ctime(&t));

	printf("\n");

	printf("\n");

	printf("\n");

	printf("\n");

	printf("/help to help (enter to exit) >>> ");

	scanf("%s", help);

	if (help == helpcom) {
	}

	printf("\n");

	printf("when printing DO NOT USE SPACES USE _ instead");

	printf("\n");

	printf("\n");

	printf("to print type wam.print(typehere");

	printf("\n");

	printf("\n");

	printf("to display the time type wam.os.time");

	printf("\n");
	printf("\n");

	printf("\n");
	printf("\n");

	// declare local variables  
	char opt;
	int n1, n2;
	float res;

	printf(" \n Enter the first number (wam.math) >>> ");
	scanf(" %d", &n1); // take fist number  
	printf(" Enter the second number (wam.math) >>> ");
	scanf(" %d", &n2); // take second number  

		res = n1 + n2; // add two numbers  
		printf(" Addition of %d and %d is: %.2f", n1, n2, res);

		printf("\n");
		printf("\n");

	    	printf("opening ipconfig...");

     		system("C:\\Windows\\System32\\ipconfig");


			system("wamcpl---wolfy-mac-cycle-programing-language");


			return 0;
	}