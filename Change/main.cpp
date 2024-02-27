#include <iostream>

int main() {
    float budget{}, price{};
    scanf("%f%f", &budget, &price);
    printf("TROCO = %.2f\n", budget-price);
    fflush(stdin);
    getchar();
    return 0;
}