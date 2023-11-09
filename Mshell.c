#include "main.h"
/**
 * main - entry point
 * @argc: argument counter
 * @argv: arguments vector
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	if (isatty(STDIN_FILENO));
	char *prompt = "(Myshell) $";/*creat new prompt */
	char *read_line = NULL, *copy_line = NULL/*getline function paramter*/
	size_t n = 0;
	ssize_t num_line;/*return size of bytes or -1*/
	const char *dlimiter = " \n";/*spareates the string commpnands*/
	int token_count = 0;
	char *token;
	int i;
		(void)argc;/*ignor the paramter argc*/
		while(1)
		{
			printf("%s", prompt);
			num_line = getline(&read_line, &n, stdin);/*read the entier stream of string*/
			if (num_line == -1)
			{
				printf("error...\n");
				return(-1);
			}
			copy_line = malloc(sizeof(char) * num_line);
			if (copy_line == NULL)/*malloc faild*/
			{
				perror("memory allocation failed");
				return(-1);
			}
			_strcyp(copy_line, read_line);/*save copy before break into tokens*/
			token = strtok(read_line, dlimiter);/*read string and spreated with dlimiter*/
			while (token != NULL)
			{
				token_count++;
				token = strtok(NULL, d limiter);
			}
			token_count++;
			argv = malloc(sizeof 
			printf("%s\n", read_line);
			free(read_line);
		}
		return (0);
}
