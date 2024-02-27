#include <iostream>

int main() {
    float radius{}, area{};
    scanf("%f", &radius);
    area = radius*radius*3.14159;
    printf("AREA = %.3f", area);
    fflush(stdin);
    getchar();
    return 0;
}