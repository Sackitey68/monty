#include "monty.h"
/**
 * make_struct - used to Set values for the struct.
 * @argv: list of argument.
 * Return: Struct buffers.
 */
buf_struct *make_struct(char *argv[])
{
	static buf_struct a;

	a.argv = argv;
	memset(a.read_buff, 0, sizeof(a.read_buff));
	memset(a.list_cmd, 0, sizeof(a.list_cmd));
	memset(a.tok_cmd, 0, sizeof(a.tok_cmd));

	return (&a);
}
/**
 * main - Takes argument list and executes file
 * @argc: count of argument
 * @argv: List of arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int find;
	buf_struct *a;

	a = make_struct(argv);

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	while ((find = open(argv[1], O_RDONLY)) == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	read(find, a->read_buff, 4096);
	close(find);
	split_newline(a);
	exec_loop(a);

	return (0);
}
