#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char FullName[] = "Suphachai";
	char FullName_Copy[20];
	
	strcpy(FullName_Copy, FullName);
	printf("%s", FullName_Copy);

	return 0;
}


