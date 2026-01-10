#include <stdio.h>

int main(void){
    int x = 0;
    int y = 0;
    
    printf("enter value for x: ");
    scanf("%d", &x);

    printf("enter value for y: ");
    scanf("%d", &y);

    if(x > y){
        printf("x is greater than y\n");
    }
    else if(x < y){
        printf("x is less than y\n");
    }
    else{
        printf("x is equal to y\n");
    }
}
