#include <stdio.h>
#include "sub.h"
#include "add.h"

int main(){
    printf("this is my calculator\n");

    double x = 2;
    double y = 3;
    printf("%lf - %lf = %lf",x,y,mySubFcn(x,y));

    double x = 1;
    double y = 2;
    printf("%lf + %lf = %lf",x,y,myaddFcn(x,y));


}