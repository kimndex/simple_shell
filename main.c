#include "ours.h"

int main(int ac, char **argv)
{
	char *prompt = "(OurShell) ~ ";
	char *lineptr;
	size_t n = 0;

	/* void variables declaration */
	(void)ac;
	(void)argv;

	/* creating an infinite loop */
	while (1){

	printf("%s", prompt);
	getline(&lineptr, &n, stdin);
	printf("%s\n", lineptr);


	/*freeing up allocated memory */
	free(lineptr);
	}

	return (0);
}
