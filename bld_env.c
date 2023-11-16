#include "main.h"
void _env()
{
	char **current_env = environ;/*equal arrays*/
		while (*current_env)
		{
			printf("current enviroment %s\n", *current_env);
			current_env++;/*move to next element*/
		}
}
