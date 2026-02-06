#include <stdio.h>
#include <string.h>

typedef struct {
    char name[30];
    char number[16];
} person;

int main (void){
    person people[3];

   
    strcpy(people[0].name, "Jonathan");
    strcpy(people[0].number, "+91 555415XXX");

    strcpy(people[1].name, "Joseph");
    strcpy(people[1].number, "+91 333555XXX");

    strcpy(people[2].name, "Giorno");
    strcpy(people[2].number, "+91 444666XXX");


    char name[30];
    printf("Name: ");
    scanf("%s", &name);

    for(int i=0; i<3; i++){
        if(strcmp(people[i].name, name) == 0){
            printf("Found: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found!");
    return 1;
}
