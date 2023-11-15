#include "main.h"
void execute(char **argv);
/**
 * main - entry point
 * @argc: argument counter
 * @argv: arguments vector
 * Return: always 0 success
 */
int main(int argc, char **argv)
{
	char *read_line = NULL, *copy_line = NULL;/*script line*/
	size_t n = 0;
	ssize_t num_line;/*return size of bytes or -1*/
	char *token;
	int num_tokens = 0;
	int i, j;
		(void)argc;
		while (1)
		{
			if (isatty(STDIN_FILENO))/*check if input with terminal*/
				printf("$ ");
			num_line = getline(&read_line, &n, stdin);
			if (num_line == -1)
			{
				/*printf("\n")print a new line*/
				free(read_line);
				return (-1);
			}
			copy_line = malloc(sizeof(char) * num_line);
			if (copy_line == NULL)
			{
				perror("memory allocation error");
				free(read_line);
				return (-1);
			}
			_strcpy(copy_line, read_line);
			token = strtok(copy_line, " \n\t");
			while (token != NULL)
			{
				num_tokens++;
				token = strtok(NULL, " \n\t");
			}
			argv = malloc(sizeof(char *) * (num_tokens + 1));
			if (argv == NULL)
			{
				perror("memory error");
				free(copy_line);
				free(read_line);
				return (-1);
			}
			token = strtok(read_line, " \n\t");
			for (i = 0; token != NULL; i++)
			{
				argv[i] = malloc(sizeof(char) * (_strlen(token) + 1));
				if (argv[i] == NULL)
				{
					perror("memory error");
					free(copy_line);
					free(argv);
					free(read_line);
					return (-1);
				}
				_strcpy(argv[i], token);
				token = strtok(NULL, " \n\t");
			}
			argv[i] = NULL;
			execute(argv);
			for (j = 0; j < i; j++)
			{
				free(argv[j]);
			}
			free(argv);
			free(copy_line);
		}
		free(read_line);
		return (0);
}
