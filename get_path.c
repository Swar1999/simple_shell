#include "main.h"
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_getenv(const char *name);
/**
 * get_path - function to allocate the location of a command
 * @cmd: command to get
 * Return: the address of the command
 */
char *get_path(char *cmd)
{
	char *path, *cpath, *tpath, *fpath;/*path copy,path token,path file*/
	int cmd_len, dir_len;
		path = _getenv("PATH");/*function to get the enviromental var*/
		if (!path)
			return ("");
		cpath = _strdup(path);/*create a duplicate of path*/
		cmd_len = _strlen(cmd);
		tpath = strtok(cpath, ":");
			while (tpath != NULL)
			{
				dir_len = _strlen(tpath);
				fpath = malloc(cmd_len + dir_len + 2);
				if (fpath == NULL)
				{
					return ("");
				}
				_strcpy(fpath, tpath);
				_strcat(fpath, "/");
				_strcat(fpath, cmd);
				if (access(fpath, X_OK) == 0)
				{
					free(cpath);
					return fpath;
				}
				free(fpath);
				tpath = strtok(NULL, ":");
			}
			free(cpath);
			if (access(cmd, X_OK) == 0)
				return (cmd);
			return ("");
}
