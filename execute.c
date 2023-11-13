#include "main.h"
/**
 * execute - function to search for path of a command
 * @read_line : string
 * @argv : array
 * Return: nothing
 */
void execute(char *read_line, char **argv)
{
	pid_t id;/*id of process*/
		id = fork();/*call the process again*/
		if (id == -1)
		{
			perror("fork error");
			exit(1);
		}
		else if (id == 0)
		{
			if (execve(read_line, argv, NULL) == -1)
			{
				perror("error command not found");
				exit(1);
			}
		}
		else
		{
			wait(NULL);/*wait for proccess complition*/
		}
}
