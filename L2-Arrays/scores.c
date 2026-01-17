#include <stdio.h>

int main(void){

    int n;
    printf("How many scores to average? ");
    scanf("%d", &n);

    float score[n];
    float num = 0;

    for(int i=0; i<n; i++){
        printf("Score: ");
        scanf("%f", &score[i]);

        num = num + score[i];
    }
    printf("Average: %f\n", num/n);

}
