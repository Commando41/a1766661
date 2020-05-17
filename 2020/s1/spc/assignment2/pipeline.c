#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

FILE *fp;

int main()
{
	//Setup a character array to store input data
	char inputtxt[100];

	//Saves the texts into an array
	char *stuff[10];

	//Store the value for a fork function
	int viden;

	//Acquire the location of the file
	fp= fopen("/dev/stdin", "r");


	while(fgets(inputtxt, 100, fp) > 0)
	{
		if(!feof(fp))
		{
			pipe(fp);
		}
	}	

	return 0;
}