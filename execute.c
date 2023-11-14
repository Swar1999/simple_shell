#include "main.h"
/** execute - function to execute commands
 * @argv : array of commands
 * Return : nothing
 */
void execute(char **argv)
{
	char *command = NULL;
		if (argv)
		{
			command = argv[0];
			if (execve(command, argv, NULL) == -1)
			{
				perror("Error");
			}
		}
}
