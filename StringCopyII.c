#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char FullName[] = "Suphachai";
	char FullName_Copy[20];
	
	strncpy(FullName_Copy, FullName, 5);
	printf("%s", FullName_Copy);

	return 0;
}


