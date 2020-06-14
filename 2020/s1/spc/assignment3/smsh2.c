/**  smsh1.c  small-shell version 1
 **		first really useful version after prompting shell
 **		this one parses the command line into strings
 **		uses fork, exec, wait, and ignores signals
 **/

#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	<signal.h>
#include	"smsh.h"
#include <string.h>

#define	DFL_PROMPT	"> "

int main()
{
	char	*cmdline, *prompt, **arglist;
	int	result;
	void	setup();

	prompt = DFL_PROMPT ;
	setup();

	while ( (cmdline = next_cmd(prompt, stdin)) != NULL ){
		int counted = 0;
		char *a = cmdline;
		while( a[counted] ) {
        if( a[counted] == '|' &&
         a[counted + 1] != 0  ) {
            counted++;
        } else {
            *a++;
        }
    }

    	if(counted == 0 && (arglist = splitline(cmdline)) != NULL){
 			execute(arglist);
			freelist(arglist);
		
    	}else{
    		char **dema = malloc(sizeof(char *)* counted);
    		int position = 0;
    		char *strptr = strtok(cmdline, "|");
    		while(strptr != NULL){
    			dema[position] = strptr;
    			position += 1;
    			strptr = strtok(NULL, "|");
    		}
    		char **argo[2];

    		argo[0] = splitline(dema[0]);
    		argo[1] = splitline(dema[1]);
            if (argo[0] != NULL && argo[1] != NULL) {
                pipeCommand(argo[0], argo[1]);
                freelist(argo[0]);
                freelist(argo[1]);
            }
            free(dema);
    	}
    	free(cmdline);
	}
	return 0;
}

void setup()
/*
 * purpose: initialize shell
 * returns: nothing. calls fatal() if trouble
 */
{
	signal(SIGINT,  SIG_IGN);
	signal(SIGQUIT, SIG_IGN);
}

void fatal(char *s1, char *s2, int n)
{
	fprintf(stderr,"Error: %s,%s\n", s1, s2);
	exit(n);
}
