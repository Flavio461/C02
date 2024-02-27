#include <iostream>
#include <math.h>

int main() {
    float M{}, C{}, i{};
    int t{};
    scanf("%f%f%d", &C, &i, &t);
    M = C*pow(1+i/100,t);
    printf("LUCRO = %.2f\n", M-C);
    fflush(stdin);
    getchar();
    return 0;
}