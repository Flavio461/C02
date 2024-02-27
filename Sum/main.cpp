#include <iostream>

int main() {
    int A{}, B{}, X{};
    scanf("%d%d", &A, &B);
    printf("X = %d", (X=A+B));
    fflush(stdin);
    getchar();
    return 0;
}