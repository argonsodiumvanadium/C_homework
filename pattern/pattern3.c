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
	int postfix = 1;

	for (int i=0; i < height; i ++) {
		for (int j=1; j <= i+1; j ++) {
			printf("%d ",j);
		}
		printf("%d\n",postfix);
		postfix += i + 2;
	}
}

int main (int argc, char **argv) {
	int i = get_height();
	print_pattern(i);
	return 0;
}
