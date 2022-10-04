#include <stdio.h>
#include <stdlib.h>

#define TYPE int

TYPE input ();
int gcf (int a, int b);

TYPE input (int i) {
	TYPE a;

	for (;;) {
		printf("[%d] : ",i);
		scanf("%d",&a);
		if (a > 0) {
			return a;
			break;
		}
	}
}

int gcd (int a,int b) {
	return !(a&&b)?a>b?a:b:gcd(b,a%b);
}

int main (int argc, char **argv) {
	int num1 = input(1), num2 = input(2);
	printf("%d\n",gcd(num1,num2));

	return 0;
}
