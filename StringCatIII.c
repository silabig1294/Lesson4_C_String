#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char str1[10] = "abcdef";
	char str2[10] = "1234567890";

	strncat (str1, str2, 3);
	puts (str1);

	return 0;
}


