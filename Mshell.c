#include "main.h"
/**
 * main - entry point
 * @argc: argument counter
 * @argv: arguments vector
 * Return: always 0 success
 */
int main(int argc, char **argv)
{
	char *read_line = NULL;/*script line*/
	size_t n = 0;
	ssize_t num_line;/*return size of bytes or -1*/
	char *token;
	int i;
		(void)argc;
		while (1)
		{
			if (isatty(STDIN_FILENO))
				printf("$ ");
			num_line = getline(&read_line, &n, stdin);
			if (num_line == -1)
			{
				printf("\n");/*print a new line*/
				return(-1);
			}
			token = strtok(read_line, " \n\t");
			i = 0;
			while (token != NULL)
			{
				argv[i] = _strdup(token);/*copy token script*/
				token = strtok(NULL, " \n\t");
				i++;
			}
			argv[i] = NULL;
			execute(read_line, argv);
		}
		free(read_line);
		return (0);
}
