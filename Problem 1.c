#include <stdio.h>
#include <math.h>

float f(float x) {
    return sqrtf(x * x + 9) - 3;
}

float g(float x) {
    return x * x / (sqrtf(x * x + 9) + 3);
}

int main() {
    float x[11];
    x[0] = 1;
    printf("x                   ");
    printf("sqrt(x^2+9)-3       ");
    printf("x^2/((sqrt(x^2+9)+3)\n");
    for (int i = 1; i <= 10; ++i) {
        x[i] = x[i - 1] / (float) 8.0;
        printf("%-20e", x[i]);
        printf("%-20e", f(x[i]));
        printf("%-20e\n", g(x[i]));
    }
    return 0;
}
