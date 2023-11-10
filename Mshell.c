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
			/*use malloc to reseve a sapace for read_line copy*/
			copy_line = malloc(sizeof(char) * num_line);
			if (copy_line == -1)
			{
				perror("memory allocation faild");
				return (-1);
			}
			_strcpy(copy_line, read_line);/*copy string*/
			/*spreate the string commneds*/
			token = strtok(read_line, " \n\t");
			/*save each token in liked list*/
			Node *head = NULL;/*creat a linked list*/
			while (token != NULL)
			{
				appnode(&head, token);/*appand new node to the list*/
				token = strtok(NULL, " \n\t");
			}
			/*need exsit condion*/
			execute(read_line, Node);/*how to send a linked list?*/
			free(linkedlist);/*frist free the list*/
			free(read_line);

		}
		return (0);
}
