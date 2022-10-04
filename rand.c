#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char **argv) {
	/*int i, n, seed;
	seed = time(NULL);
	srand(seed);*/
	
	for (int i = 0;i < 5;i++)
		printf("%d\n",rand());

	return 0;
}
