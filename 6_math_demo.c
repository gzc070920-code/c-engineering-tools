#include <stdio.h>
#include <math.h>
int main(){
    int result_1 = 2 + 10 / 8 * 3;
    printf("result_1 = %d\n", result_1);
    double result_2 = 2 + 10 / 8.0 * 3;
    printf("result_2 = %lf\n", result_2);
    int a = -1;
    int b = -2;
    int c = 3;
    double delta = pow(b,2) - 4 * a * c;
    double x_1 = (-b + sqrt(delta)) / 2 * a;
    double x_2 = (-b - sqrt(delta)) / 2 * a;
     printf("该一元二次方程的根为：%lf,%lf\n", x_1, x_2);
    
    return 0;
}