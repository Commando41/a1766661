#include <stdio.h>
#include <unistd.h>
#include <string.h>
//Create a file pointer object
FILE *fp;
int main()
{
	//Setup a character array to store input data
	char inputtxt[100];
	//int max = 1;
	char *stuff;
	//int i = 0;
	//Acquire the location of the file
	fp= fopen("/dev/stdin", "r");
	stuff = strtok(inputtxt,"\n");
	//Receives as input all the lines within the file
	while(fgets(inputtxt, 100, fp) > 0){
		//Displays each line taken from file
		stuff = strtok(inputtxt,"\n");

		//i++;
		//if(i == max){
		//	max++;
	//		suff = (char*)realloc(stuff,max);
	//	}
		//execvp(stuff,stuff);
		//puts(inputtxt);
		printf("%s\n",stuff);
	}

	//free(stuff);
	//Close the file when done
	fclose(fp);
	return 0;
}