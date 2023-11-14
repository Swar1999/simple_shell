#include "main.h"
extern char **environ;
/**
 * _getenv - function to get the enviroment
 * @name: command name
 * Return: command
 */
char *_getenv(const char *name)
{
	char *cmd_name;
	int i, j;
		for (i = 0; environ[i] != NULL; i++)
		{
			cmd_name = environ[i];
			j = 0;
			while (name[j] != '\0' && name[j] == cmd_name[j])
			{
				j++;
			}
			if (name[j] == '\0' && cmd_name[j] == '=')
			{
				return (cmd_name);
			}
		}
		return (NULL);
}
