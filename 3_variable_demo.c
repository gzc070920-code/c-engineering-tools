#include <stdio.h>

int main(){
    int mike_score;
    int john_score;
    mike_score = 89;
    john_score = 98;
    printf("mike score is %d.\n",mike_score);
    printf("john score is %d.\n",john_score);
    mike_score = john_score;
    john_score = 89;
    printf("mike score is %d.\n",mike_score);
    printf("john score is %d.\n",john_score);

    return 0;
}