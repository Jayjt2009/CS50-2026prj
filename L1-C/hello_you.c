#include <stdio.h>

int main(void){
   char name[30] = "";
   printf("What is your name? ");
   scanf("%[^\n]s", &name);

   printf("Hello, %s\n", name);
}
