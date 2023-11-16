#include "main.h"
/**
 * _env - function to print enviroment
 * Return : nothing
 */
char * _env(void)
{
	char **current_env = environ;/*equal arrays*/
		while (*current_env)
		{
			printf("current enviroment %s\n", *current_env);
			current_env++;/*move to next element*/
		}
		return (*current_env);
}
