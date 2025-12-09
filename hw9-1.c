#include <stdio.h>

int main(void) {
    int m[2][2];
    double det;

    scanf("%d", &m[0][0]);
    scanf("%d", &m[0][1]);
    scanf("%d", &m[1][0]);
    scanf("%d", &m[1][1]);

    det = (double)m[0][0] * m[1][1] - (double)m[0][1] * m[1][0];

    printf("You entered\n");
    printf("%d %d\n", m[0][0], m[0][1]);
    printf("%d %d\n", m[1][0], m[1][1]);
    printf("Determinant is %f\n", det);

    return 0;
}


