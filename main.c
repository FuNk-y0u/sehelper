#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
    if(argc == 2){
	char extension[50];
	char name[50];
	char dir[50];

	strcpy(extension,".txt");
	strcpy(name, argv[1]);
	strcpy(dir,"src/");
	
	strncat(dir,name,15);
	strncat(dir,extension,4);

	
        FILE *file;

	char info[50];
	file = fopen(dir,"r");

	if(file == NULL)
	{
		printf("The Command Doesnot exsist");
	}
	else{
		while(fgets(info, 50, file) != NULL){
			printf("%s", info);
		}
	}


    }
    else if(argc > 2){
        printf("Too many arguments!\n");
    }
    else{
        printf("Proper Arguments Not Supplied!\n");
    }
}
