#include <stdio.h>
#include <string.h>

int main(void){
    char strings[][30] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    char s[30];
    printf("String: ");
    scanf("%[^\n]s", &s);

    for(int i=0; i<6; i++){
        if(strcmp(strings[i], s) == 0){
            printf("Found\n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}
