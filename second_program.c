#include <stdio.h>

int main() {
	char s[70];
	printf("Vvedite predlozhenie:\n");
	fgets(s, sizeof(s), stdin);
	printf("Vasha stroka:\n%s", s);
}
