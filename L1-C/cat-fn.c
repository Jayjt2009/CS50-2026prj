#include <stdio.h>

int get_n(void);
void meow(int n);

int main(void){
    int n = get_n();
    meow(n);
}

int get_n(void){
    int n;

    do{
        printf("Value of n: ");
        scanf("%d", &n);
    } while(n < 0);
    return n;
}

void meow(int n){
    for(int i=0; i < n; i++){
        printf("meow\n");
    }
}
