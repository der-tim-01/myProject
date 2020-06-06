#include <stdio.h>
#include "sub.h"

int main(){
    printf("this is my calculator\n");

    double x = 2;
    double y = 3;
    printf("%lf - %lf = %lf",x,y,mySubFcn(x,y));

}