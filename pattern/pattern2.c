#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_height () {
	int i;
	printf("enter height :");
	scanf("%d",&i);
	return i;
}

int print_pattern (int height) {
	for (int i=1; i <= height; i ++) {
		for (int j=0; j < i; j ++) {
			printf("%d ",i);
		}
		printf("\n");
	}
}

int main (int argc, char **argv) {
	int i = get_height();
	print_pattern(i);
	return 0;
}
