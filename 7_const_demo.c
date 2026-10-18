#include <stdio.h>
#include <math.h>
int main(){
    const float PI = 3.1415;
    int r_1 = 2;
    float area_1 =PI * pow(r_1,2);
    printf("圆的面积为:%.2lf\n",area_1);
    int r_2 = 8;
    double area_2 =PI * pow(r_2,2);
    printf("圆的面积为:%.2lf\n",area_2);

    return 0;
}