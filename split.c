#include "monty.h"
/**
 * split_newline - Tokenizes and read buffer on newlines.
 * @a: Global struct for buffers
 * Return: Tokenized list of command
 */
char **split_newline(buf_struct *a)
{
	char delim[] = "\n";
	char *token;
	int i = 0;

	token = strtok(a->read_buff, delim);

	while (token != NULL)
	{
		a->list_cmd[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	if (a->list_cmd[0] == NULL)
		return (NULL);
	return (a->list_cmd);
}
/**
 * split_spaces - Tokenize each command from its value
 * @buff: Index from first tokenized list of commands
 * @a: Global struct for buffers
 * Return: Tokenized command
 */
char **split_spaces(char *buff, buf_struct *a)
{
	char delim[] = " \t";
	char *token;
	int i = 0;

	token = strtok(buff, delim);
	while (token != NULL && i < 2)
	{
		a->tok_cmd[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	a->tok_cmd[i] = NULL;
	if (a->tok_cmd[0] == NULL)
		return (NULL);
	if (strncmp(a->tok_cmd[0], "#", 1) == 0)
		a->tok_cmd[0] = "nop";
	return (a->tok_cmd);
}
