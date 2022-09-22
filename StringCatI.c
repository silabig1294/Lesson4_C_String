#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char FullName[] = "Suphachai";
    char initial[] = "Mr.";

    strcat(initial, FullName);
    printf("%s", initial);

	return 0;
}


