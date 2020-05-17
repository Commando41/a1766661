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

	//Saves the texts into an array
	char *stuff[10];

	//Store the value for a fork function
	int viden;

	//Acquire the location of the file
	fp= fopen("/dev/stdin", "r");

	//Receives as input all the lines within the file
	while(fgets(inputtxt, 100, fp) > 0)
	{
		//Make a index to use for the array
		int i = 0;

		//Saves the first text as the first element so the nextsubstrings can be access by passing a pointer
		stuff[0] = strtok(inputtxt, " \n");

		//Whenever a NULL is called, uses the inputtxt value to return the next substring.
		while(stuff[i])
		{
			i++;
			stuff[i] = strtok(NULL, " \n");
		}

		//Make a child process 
		viden = fork();

		//When the fork is positive it will wait
		if(viden > 0){
			wait(NULL);
		}
		else
		{
			//If the fork is nefgative it will display error to user
			if(viden < 0)
			{
				printf("Error\n");
				return 1;
			}
			else
			{
				//Otherwise if it is 0 but the execvp funtion doesnt work
				if(viden == 0)
				{
					if(execvp(stuff[0],stuff) == -1)
					{
						//Display fail
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