#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int i;
	char FullName[] = "Suphachai";
    	int count = strlen(FullName);
    
	for (i=0;i<count;i++) {
        printf("%c\n", FullName[i]);
    }

	return 0;
}


