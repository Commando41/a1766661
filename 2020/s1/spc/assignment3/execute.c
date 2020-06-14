/* execute.c - code used by small shell to execute commands */

#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	<signal.h>
#include	<sys/wait.h>
#include <fcntl.h>
#include <stdbool.h>

#define INPUT 0  //  standard input file descriptor
#define OUTPUT 1 // standard output file descriptor
#define READ 0       // pipe read file descriptor
#define WRITE 1      // pipe write file descriptor

int execute(char *argv[])
/*
 * purpose: run a program passing it arguments
 * returns: status returned via wait, or -1 on error
 *  errors: -1 on fork() or wait() errors

 */
{
	int	pid ;
	int	child_info = -1;

	if ( argv[0] == NULL )		/* nothing succeeds	*/
		return 0;

	if ( (pid = fork())  == -1 )
		perror("fork");
	else if ( pid == 0 ){
		signal(SIGINT, SIG_DFL);
		signal(SIGQUIT, SIG_DFL);
		execvp(argv[0], argv);
		perror("cannot execute command");
		exit(1);
	}
	else {
		if ( wait(&child_info) == -1 )
			perror("wait");
	}
	return child_info;
}

int pipeCommand(char *one[], char *sec[]){
    int f[2]; 
    int status, vide, vide2;

    // creating child to run commands
    vide = fork();
    if(vide == -1){
        printf("Cannot fork!\n"); // fork was unsuccessful
        return -1; 
	}else{            
            wait(&status);
            return (status); // parent process 
    }

    // make a pipe
    if (pipe(f) < 0)
    {
        printf("cannot pipe!\n");
        return -1;
    }
    vide2 = fork();
    if(vide2 == -1) { //Make another process
         printf("unable to fork!\n");
         return -1;
    }else if(vide2 == 0){
         return pipeExecute(one, f, true, true);
    }else{
        return pipeExecute(sec, f, true, false);
    }

int pipeExecute(char *com[], int f[], bool isPipe, bool isChild) {
    bool isIn = false;
    bool isOut = false;
    if (isPipe) {
        if (isChild) {
            close(OUTPUT); // close standard output
        } else {
            close(INPUT); // close standard input
        }
    }
    if (com[1]) {
        if (com[1][0] == '<') {
            isIn = true;
        } else if (com[1][0] == '>') {
            isOut = true;
        }
    }
    if (isIn || isOut) {
        com[1] = NULL;
    }
    if (isIn) {
        int in = open(com[2], O_RDONLY);
        if( in < 0) {
            fatal("Can not open the file", com[2], errno);
        }
        dup2(in, READ);
        close(in);
    }
    if (isOut) {
        int out = open(com[2], O_WRONLY | O_TRUNC | O_CREAT,
                       S_IRUSR | S_IRGRP | S_IWGRP | S_IWUSR);
        if( out < 0) {
            fatal("Can not open the file", com[2], errno);
        }
        dup2(out, WRITE);
        close(out);
    }

    if (isChild) {
        dup(f[WRITE]);// standard output to pipe
    } else {
        dup(f[READ]); //standard input will come from pipe
    }

    close(f[READ]); // close the file descriptors
    close(f[WRITE]);

    
    execvp(com[0], com); // execute command 1

    printf("execvp call failed!\n"); // error occurs when its returned
    return -1;
}