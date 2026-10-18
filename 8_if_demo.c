#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
    int a = 2;
    int b = 8;
    int ans;
    if(a > b){
        ans = a - b;
        printf("a与b的差值为:%d\n", ans);
    }
    else{
        ans = b - a;
         printf("a与b的差值为:%d\n", ans);
    }
    

    return 0;
}