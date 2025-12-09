#include <stdio.h>

int main(void) {
    int a[2][2];   
    double det;

    scanf("%d", &a[0][0]);
    scanf("%d", &a[0][1]);
    scanf("%d", &a[1][0]);
    scanf("%d", &a[1][1]);

    det = (double)a[0][0] * a[1][1] - (double)a[0][1] * a[1][0];

    printf("You entered\n");
    printf("%d %d\n", a[0][0], a[0][1]);
    printf("%d %d\n", a[1][0], a[1][1]);
    printf("Determinant is %f\n", det);

    return 0;
}




