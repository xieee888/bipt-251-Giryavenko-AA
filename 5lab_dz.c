#include <stdio.h>
#include <math.h>

int main() {
    double x = 3.74e-2, y = -0.825, z = 16.0;
    
    double v = (1.0 + pow(sin(x + y), 2)) / 
               fabs(x - (2.0 * y) / (1.0 + pow(x, 2) * pow(y, 2))) 
               * pow(x, fabs(y)) 
               + pow(cos(atan(1.0 / z)), 2);
    
    printf("Результат вычисления:\n");
    printf("v = %.6f\n", v);
    return 0;
}