#include <stdio.h>
#include <string.h>

int main(void){
    char input[30]="";
    printf("Input:  ");
    scanf("%s", input);

    printf("Output: ");
    for(int i=0, n=strlen(input); i<n; i++){
        printf("%c", input[i]);
    }
    printf("\n");
}
