#include "main.h"
char *get_path(char *command);
/**
 * execute - function to search for path of a command
 * @read_line : string
 * @argv : array
 * Return: nothing
 */
void execute(char **argv)
{
	pid_t id;
	char *cmd, *real_cmd;
		id = fork();
		cmd = argv[0];/*get the command*/
		if (id == -1)
		{
			perror("fork error");
			exit(1);
		}
		else if (id == 0)
		{
			real_cmd = get_path(cmd);
			if (execve(real_cmd, argv, environ) == -1)
			{
				perror("execve error");
				free(real_cmd);
				exit(1);
			}
			free(real_cmd);
		}
			wait(NULL);
}
