#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
//Create a file pointer object
FILE *fp;
int main()
{
	//Setup a character array to store input data
	char inputtxt[100];

	char *stuff[10];

	int viden;

	//Acquire the location of the file
	fp= fopen("/dev/stdin", "r");

	//Receives as input all the lines within the file
	while(fgets(inputtxt, 100, fp) > 0)
	{
		stuff[0] = strtok(inputtxt, " \n");
		int i = 0;
		while(stuff[i] != NULL)
		{
			i++;
			stuff[i] = strtok(NULL, " \n");
		}

		viden = fork();
		if(viden > 0){
		wait(NULL);
		}
		else
		{
			if(viden < 0)
			{
				printf("Error\n");
				return 1;
			}
			else
			{
				if(viden == 0)
				{
					if(execvp(stuff[0],stuff) == -1)
					{
					printf("Failed.\n");
					}
				}
			}
		}
	}

	//Close the file when done
	fclose(fp);
	return 0;
}