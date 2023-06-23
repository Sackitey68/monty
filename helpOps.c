#include "monty.h"

/**
  * digits_only - checks for non integer 
  * @str: string to verify
  * Return: 0 if contains non integer type 1 if only integer type
  */
int digits_only(char *str)
{
	int k;

	for (k = 0; str[k]; k++)
		if (isdigit(str[k]) == 0)
		{
			if (str[k] == '-' && k == 0)
				continue;
			return (0);
		}
	return (1);
}
