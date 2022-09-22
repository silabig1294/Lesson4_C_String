#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char Name1[] = "Suphachai";
	char Name2[] = "Surachai";
	
	if (strncmp(Name1, Name2, 2) == 0) {
		printf("Equal");
	}else{
		printf("Not Equal");
	}

	return 0;
}


