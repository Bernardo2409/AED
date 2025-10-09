#include <stdio.h>
int main (void) {

    char first_name[30];
    char last_name[30];

    printf(" What is your first name and last name");
    scanf("%s %s", first_name, last_name);
    printf("Hello %s %s ! \n", first_name, last_name);
}