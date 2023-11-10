#include "main.h"
/**
 * main - entry point
 * @argc: argument counter
 * @argv: arguments vector
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	char *prompt = "$ ";/*creat new prompt */
	char *read_line = NULL, *copy_line = NULL/*getline function paramter*/
	size_t n = 0;
	ssize_t num_line;/*return size of bytes or -1*/
	int token_count = 0;
	char *token;
	int i;
		(void)argc;/*ignor the paramter argc*/
		while(1)
		{
			if (isatty(STDIN_FILENO));
			printf("%s", prompt);
			num_line = getline(&read_line, &n, stdin);/*read the entier stream of string*/
			if (num_line == -1)
			{
				printf("\n");/*print a new line*/
				break;/*end*/
			}
			copy_line = malloc(sizeof(char) * num_line);
			if (copy_line == NULL)/*malloc faild*/
			{
				perror("memory allocation failed");
				return(-1);
			}
			_strcyp(copy_line, read_line);/*save copy before break into tokens*/
			token = strtok(read_line, " \n\t");/*read string and spreated with dlimiter*/
			while (token != NULL)
			{
				token_count++;
				token = strtok(NULL, " \n\t");
			}
			token_count++;
			argv = malloc(sizeof(char *) *token_count);
			token = strtok(copy_line, " \n\t");/*store each token*/

			printf("%s\n", read_line);
			free(read_line);
		}
		return (0);
}
