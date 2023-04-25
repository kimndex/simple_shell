#include "ours.h"

int main(int ac, char **argv)
{
	char *prompt = "(OurShell) ~ ";
	char *lineptr = NULL, *lineptr_copy = NULL;
	size_t n = 0;
	ssize_t xread_chars;
	const char *delim = " \n"
	int num_tokens = 0;
	char *token;
	int j;

	/* void variables declaration */
	(void)ac;

	/* creating an infinite loop */
	while (1){

	printf("%s", prompt);
	xread_chars = getline(&lineptr, &n, stdin);
	/* now we see whether EOF was reached, function failed(getline) or user input ctrl+D */
	if (xread_chars == -1){
		printf("Leaving shell..\n");
		return (-1);
	}

	/*space allocation for lineptr copy*/
	lineptr_copy = malloc(sizeof(char) * xread_chars);
        if (lineptr_copy== NULL){
            perror("tsh: memory allocation error");
            return (-1);
        }
	/* copy lineptr to lineptr_copy */
	strcpy(lineptr_copy, lineptr);

	printf("%s\n", lineptr);



	/*freeing up allocated memory */
	free(lineptr);
	}

	return (0);
}
