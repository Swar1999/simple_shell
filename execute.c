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
		if (id == 0)
		{
			execve(read_line, argv, NULL);/*search for path name*/
		}
		else
		{
			wait(NULL);/*wait for proccess complition*/
		}
}
