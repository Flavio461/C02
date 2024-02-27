#include <iostream>

int main() {
    int number{}, hours{};
    float hourlyRate{}, salary{};
    scanf("%d%d%f", &number, &hours, &hourlyRate);
    salary = hours*hourlyRate;
    printf("NUMBER = %d\nSALARY = U$ %.2f", number, salary);
    fflush(stdin);
    getchar();
    return 0;
}