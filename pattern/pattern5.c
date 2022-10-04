#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_height () {
        int i;
        printf("enter height :");
        scanf("%d",&i);
        return i;
}

int main (int argc, char **argv) {
	int height = get_height();
	int post_element_done = 0;
	int pre_element_done = 0;

	int length = 1 + 2*height;
	int line[length];
	int next_line[length];
	memset(line,0,length * sizeof(int));
	memset(next_line,0,length * sizeof(int));

	int *active_array;

	for (int i = 0; i < length; i ++) {
		line[i] = -1;
		next_line[i] = -1;
	}

	line[length/2] = 1;

	for (int i = 0; i < height; i ++) {
		for (int i=0; i < length; i ++)
	       		line[i] < 0?printf("  "):printf("%d ", line[i]);
		printf("\n");

		for (int i=0; i < length; i++) {
			if (line[i] > 0) {
				next_line[i] = (line[i] + 2)%10;
			} else {
				if (i != 0) {
					if (line[i - 1] > 0 ){
						next_line[i] = (line[i - 1] + 1)%10;
						continue;
					}
				}

				if (i != length - 1 && line[i + 1] > 0) {
					next_line[i] = (line[i + 1] + 1)%10;
				}
			}
		}

		for (int i = 0; i < length; i ++)
			line[i] = next_line[i];
	}

	return 0;
}
