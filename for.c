#include <stdio.h>
#include <math.h>

int main(void){
    double num, root_num;
    printf("input a number :");
    scanf("%lf", &num);
    root_num = sqrt(num);
    printf("the square root of %.2f is %f \n",num, root_num);

    
    return 0;
}
