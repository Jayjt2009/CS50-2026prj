#include <stdio.h>


float average(int length, float numbers[]);

int main(void){

    int n;
    printf("How many scores to average? ");
    scanf("%d", &n);

    float score[n];

    for(int i=0; i<n; i++){
        printf("Score%d: ", i+1 );
        scanf("%f", &score[i]);
    }
    printf("Average: %f\n", average(n, score));
}

float average(int length, float numbers[]){
    int sum = 0;
    for(int i=0; i<length; i++){
        sum += numbers[i];
    }
    return sum/(float)length;
}
