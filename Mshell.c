#include "main.h"
/**
 * main - entry point
 * @argc: argument counter
 * @argv: arguments vector
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	char *prompt = "(Myshell) $";/*creat new prompt */
	char *readline;/*getline function paramter*/
	size_t n = 0;
		(void)argc;/*ignor the paramter argc*/
		(void)argv;/*ignor the paramter argv*/
		while(1)
		{
			printf("%s", prompt);
			getline(&readline, &n, stdin);/*read the entier stream of string*/
			printf("%s\n", readline);
		}
		free(readline);
		return (0);
}
