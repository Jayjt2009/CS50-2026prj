#include <stdio.h>

int main (void){
    char name[30] = "";
    printf("Name: ");
    scanf("%s", &name);
    
    int n = 0;
    while(name[n] != '\0'){
        n++;
    }
    printf("%i\n", n);
}
