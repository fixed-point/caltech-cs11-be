#include <stdio.h>

/* Simple hello world program, for easy reverse engineering. */
int main(int argc, char **argv) {
	int i = 0;
	/* Print hello world. */
	printf("Hello world!\n");

	/* Print out all of the arguments. */
	printf("# of arguments: %d\n", argc);
	printf("Arguments:\n");
	while (i < argc) {
		printf("  [%s]\n", argv[i]);
		i++;
	}

	return 0;
}
