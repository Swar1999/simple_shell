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
				}
				else if (c_id == 0)/*child process created*/
				{
					if (execve(real, argv, NULL) == -1)
					{
						perror("Error");
						exit(126);
					}
				}
				else
				{
					waitpid(c_id, &status, 0);
					/*if (WIFEXITED(status))
					{
						printf("child%d\n", WEXITSTATUS(status));
					}*/
				}
				}
			else
			{
				fprintf(stderr, "command not found: %s\n", command);
			}
			free(real);
		}
}
