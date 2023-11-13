#include "main.h"
/**
 * get_path - function to get the path of a command
 * @command : command to be exectud
 * Return : the value 
 */
char *get_path(char *command)
{
	char *path, *cpath, *tpath, *fpath;/*path,path cpoy,path token, path file*/
	int len1, len2;/*1 command length,2 directory length*/
	struct stat buffer;
		path = _getenv("PATH");
		if (path)
		{
			cpath = _strdup(path);/*duplicate the string*/
			len1 = _strlen(command);/*get the length of command*/
			tpath = strtok(cpath, ":");/*divide into tokens*/
			while (tpath != NULL)
			{
				len2 = _strlen(tpath);/*length of each token*/
				fpath = malloc(len1 + len2 + 2);/*allocat memory*/
				/*shaping the path*/
				_strcpy(fpath, tpath);
				_strcat(fpath, "/");
				_strcat(fpath, command);
				_strcat(fpath, "\0");
				if (stat(fpath, &buffer) == 0)/*command not found*/
				{
					free(cpath);
					return (fpath);
				}
				else
				{
					free(fpath);
					tpath = strtok(NULL, ":");/*move to next*/
				}
			}
			if (stat(command, &buffer) == 0)
				return (command);
			return (NULL);
		}
		return (NULL);
}


