#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		return 1;
	int len = strlen(argv[1]);
	for (int i = 0; i < len; ++i) {
		printf("%c", argv[1][i] - i);
	}
	printf("\n");
	return 0;
}
