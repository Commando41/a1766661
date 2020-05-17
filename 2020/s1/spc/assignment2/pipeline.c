#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

FILE *fp;

int main()
{
	//Setup a character array to store input data
	char inputtxt[100];
	int newPipe[2], prevPipe[2];
	//Saves the texts into an array
	char *stuff[10];
	int id;
	//Store the value for a fork function
	int viden;

	//Acquire the location of the file
	fp= fopen("/dev/stdin", "r");


	while(fgets(inputtxt, 100, fp) > 0)
	{
		if(!feof(fp))
		{
			if(pipe(newPipe) == -1)
			{
				printf("Failed making pipe \n");
			}
		}
		stuff[0] = strtok(inputtxt, " \n");

		int i = 0;

		while(stuff[i])
		{
			i++;
			stuff[i] = strtok(NULL, " \n");
		}

		if((viden = fork()) < 0)
		{
			printf("Did not work!\n");
			return 1;
		}
		else 
		{
			if(id > 0)
			{
				//Parent
				wait(NULL);

				prevPipe[0] = newPipe[0];
				prevPipe[1] = newPipe[1];
				close(newPipe[0]);
				close(newPipe[1]);
			}
			else
			{
				if(id == 0)
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


	fclose(fp);
	return 0;
}