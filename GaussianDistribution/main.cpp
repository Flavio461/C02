#include <iostream>
#include <math.h>

int main() {
    float x{}, m{}, s{};
    scanf("%f%f%f", &x, &m, &s);
    float fx = 1/sqrt(2*3.1415*s*s)*powf(2.718,pow(x-m, 2)/(-2*s*s));
    printf("%.4f\n", fx);
    fflush(stdin);
    getchar();
    return 0;
}