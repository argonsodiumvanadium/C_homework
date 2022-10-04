#include <stdio.h>
#include <stdlib.h>

int viranhanka (int depth);

int get_length_of_series () {
	for (;;) {
		int a;
		printf("enter a number greater than 0 : ");
		scanf("%d", &a);

		if (a > 0)
			return a;
	}
}

int virahanka (int depth) {
	if (depth == 1 || depth == 2)
		return 1;
	return virahanka(depth - 2) + virahanka(depth - 1);
}

int main (int argc, char **argv) {
	int length = get_length_of_series();
	for (int i=1; i <= length; i ++)
		printf("%d  ",virahanka(i));
	printf("\n");
	return 0;
}
