#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIMENSIONS 7

int verticalLineAtOrigin (int x, int y) {
	return x == 0?1:0;
}
int verticalLineAtEdge (int x, int y) {
	return x == DIMENSIONS - 1?1:0;
}
int obliqueLine1 (int x, int y) {
	return y + x + 1 == 7?1:0; 
}
int obliqueLine2 (int x, int y) {
	return y == x?1:0;
}
int print_pattern () {
	for (int y=0; y < DIMENSIONS; y++) {
		for (int x=0; x < DIMENSIONS; x ++) {
			if (verticalLineAtOrigin(x,y) || verticalLineAtEdge(x,y) || obliqueLine1(x,y) || obliqueLine2(x,y))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

int main (int argc, char **argv) {
	print_pattern();
	return 0;
}
