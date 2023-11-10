#include "main.h"
/**
 * main - entry point
 * @argc: argument counter
 * @argv: arguments vector
 * Return: always 0 success
 */
int main(int argc, char **argv)
{
	char *prompt = "$ ";/*creat new prompt */
	char *read_line = NULL, *copy_line = NULL;/*getline function paramter*/
	size_t n = 0;
	ssize_t num_line;/*return size of bytes or -1*/
	int token_count = 0;
	char *token;
	int i;
		(void)argc;
		while (1)
		{
			if (isatty(STDIN_FILENO))
				printf("%s", prompt);
			num_line = getline(&read_line, &n, stdin);
			if (num_line == -1)
			{
				printf("\n");/*print a new line*/
				return(-1);
			}
			copy_line = malloc(sizeof(char) * num_line);
			if (copy_line == NULL)
			{
				perror("memory allocation faild");
				return (-1);
			}
			_strcpy(copy_line, read_line);/*copy string*/
			token = strtok(read_line, " \n\t");
			while (token != NULL)
			{
				token_count++;
				token = strtok(NULL, " \n\t");
			}
			token_count++;
			argv = malloc(sizeof(char *) * token_count);
			token = strtok(copy_line, " \n\t");
			for (i = 0; token != NULL; i++)
			{
				argv[i] = malloc(sizeof(char) * _strlen(token));
				_strcpy(argv[i], token);
				token = strtok(NULL, " \n\t");
			}
			argv[i] = NULL;
			execute(read_line, argv);
		}
		free(copy_line);
		free(read_line);
		return (0);
}
