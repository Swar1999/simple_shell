#include "main.h"
char *get_path(char *command);
/**
 * execute - function to execute commands
 * @argv : array of commands
 * Return : nothing
 */
void execute(char **argv)
{
	char *command = NULL, *real = NULL;
	int status;
	pid_t c_id;
		if (argv && argv[0])
		{
			command = argv[0];
			real = get_path(command);
			if (real && *real != '\0') /*get_path return cmd*/
			{
				c_id = fork();/* child process id*/
				if (c_id == -1)
				{
					perror("fork error");
					exit(EXIT_FAILURE);
				}
				else if (c_id == 0)/*child process created*/
				{
					if (execve(real, argv, environ) == -1)
					{
						perror("Error");
						printf("No such a file or Directory\n");
						exit(EXIT_FAILURE);
					}
					else
					{
						exit(0);
					}
				}
				else
				{
					waitpid(c_id, &status, 0);
				}
				free(real);
			}
			else
			{
				printf("No such a file or directory\n");
				exit(EXIT_FAILURE);
			}
		}
}
