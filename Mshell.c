#include "main.h"
/**
 * main - entry point
 * @argc: argument counter
 * @argv: arguments vector
 * Return: always 0 success
 */
int main(void)
{
	char *prompt = "$ ";/*creat new prompt */
	char *read_line = NULL, *copy_line = NULL;/*getline function paramter*/
	char **artokenm = NULL;
	size_t n = 0;
	ssize_t num_line;/*return size of bytes or -1*/
	int token_count = 0;
	char *token;
	int i;
		while (1)
		{
			if (isatty(STDIN_FILENO))
				printf("%s", prompt);
			num_line = getline(&read_line, &n, stdin);
			if (num_line == -1)
			{
				printf("\n");/*print a new line*/
				break;/*end*/
			}
			copy_line = malloc(sizeof(char) * num_line);
			if (copy_line == NULL)
			{
				perror("memory allocation faild");
				return (-1);
			}
			_strcpy(copy_line, read_line);/*copy string*/
			token = strtok(read_line, " \n\t");
			artoken = malloc(sizeof(char *) *token_count);
			while (token != NULL)
			{
				artoken[i] = token;
				token = strtok(NULL, " \n\t");
				i++;
			}
			token_count++;
		artoken = NULL;
		execute(read_line, artoken);
		free(read_line);
		}
		return (0);
}
