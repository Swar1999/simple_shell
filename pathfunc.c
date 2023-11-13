#include "main.h"
/**
 * _getenv - function that search for enviroment vars
 * @name : string to be searched
 * Return : the value of the enviroment var or null
 */
char _getenv(char *env_name)
{
	extern char **environ;/*declare the global variable*/
	int i;
	char *sign;/*character to search for*/
		while (environ[i] != NULL)
		{
			if (_strncmp(environ[i], env_name, _strlen(env_name) == 0))
				sign = _strchr(environ[i], '=');/*search for = sign*/
			if (sign != NULL)
				return (sign + 1);
		}
		perror("No such a file or directory");
		return (NULL);
}					
