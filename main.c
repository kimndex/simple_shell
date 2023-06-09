#include "ours.h"
/**
 *main - main function
 *@ac: argument
 *@argv: argument
 *Return: 0
 */
int main(int ac, char **argv)
{
	char *prompt = "(OurShell) ~ ";
	char *lineptr;
	size_t n = 0;
	ssize_t xread_chars;

	/* void variables declaration */
	(void)ac;
	(void)argv;

	/* creating an infinite loop */
	while (1)
	{
	printf("%s", prompt);
	xread_chars = getline(&lineptr, &n, stdin);
	/*see whether EOF was reached, failed(getline) or user input ctrl+D */
	if (xread_chars == -1)
	{
		printf("Leaving shell..\n");
		return (-1);

	printf("%s\n", lineptr);

	/*freeing up allocated memory */
	free(lineptr);
	}

	return (0);
}
}
