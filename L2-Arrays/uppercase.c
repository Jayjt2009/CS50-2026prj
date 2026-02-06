#include<stdio.h>
#include<string.h>

int main(void){
    char s[30] = "";
    printf("Before: ");
    scanf("%[^\n]s", &s);

    for(int i = 0, n = strlen(s); i<n; i++){
        //check for lowercase
        if(s[i] >= 'a' && s[i] <= 'z'){
            printf("%c", s[i] - 32);
        }else{
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
