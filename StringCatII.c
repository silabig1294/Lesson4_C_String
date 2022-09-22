#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char FirstName[] = "Suphachai";
    char LastName[] = "Somphanit";
    char FullName[50];

    strcat(FullName, FirstName);
    strcat(FullName, " ");
    strcat(FullName, LastName);

    printf("FirstName : %s\n", FirstName);
    printf("LastName : %s\n", LastName);
    printf("-----------------------------------\n");
    printf("FullName : %s", FullName);

	return 0;
}


