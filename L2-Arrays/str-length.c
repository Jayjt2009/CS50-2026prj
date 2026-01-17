#include <stdio.h>
#include <string.h>

int main(void){
    char name[30] = "";
    printf("Name: ");
    scanf("%s", &name);

    int n = strlen(name);
    printf("%i\n", n);
}
