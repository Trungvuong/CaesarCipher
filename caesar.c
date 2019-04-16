/*********************************************************************
 * This program implements the Caesar cipher using command line 
 * argument. The format for the command line is follows:
 * ./a.out <plaintext> <key>
 *
 * @author Trung-Vuong Pham
 * @version 1.0
 *
 *********************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int key = 0;
	if(argc != 3)
	    printf("\nNot enough arguments in command line!\n ");
	else{
	    key = atoi(argv[1]);
	    char message[100];
	    printf("Input plaintext message: ");
	    scanf("%[^\n]%*c", message);

	    if(*argv[2] == 'E'){
		for(int i = 0; i < strlen(message); i++){
		    if(isupper(message[i]))
			printf("%c", (((message[i] - 'A' + key) % 26) + 'A'));
		    if(islower(message[i]))
			printf("%c", (((message[i] - 'a' + key) % 26) + 'a'));
		}
	    }

	    else{
		for(int i = 0; i < strlen(message); i++){
		    if(isalpha(message[i]))
		    	printf("%c", (((message[i] - 'A' + key) % 26) + 'A'));
		    if(islower(message[i]))
			printf("%c", (((message[i] = 'a' + key) % 26) + 'a'));
		}
	    }
	    printf("\n");
	}
	return 0;
}
