#include <stdio.h>
#include <stdlib.h>

#define TYPE int
#define MAX_ATT 5

TYPE input ();
int print_language (int option);

TYPE input () {
	TYPE a;
	scanf("%d",&a);

	return a;
}

int print_language (int option) {
	switch(option) {
		case 1:
			printf("Hello !\n: ");
			return 1;
		case 2:
			printf("नमस्ते !\n: ");
			return 1;
		case 3:
			printf("ਸਤ ਸ੍ਰੀ ਅਕਾਲ !\n: ");
			return 1;
		case 4:
			printf("नमस्कार !\n: ");
			return 1;
		case 5:
			printf("హలో !\n: ");
			return 1;
		default:
			printf("invalid input\n: ");
			return 0;
	}
}

int main (int argc, char **argv) {
	printf("for English, please press 1;\n for Hindi, press 2;\n for Punjabi, press 3;\n for Marathi, press 4;\n for Telugu press 5;\n: ");
	for (int i=0;i < MAX_ATT;)
		print_language(input())?i:i++;
	return 0;
}
