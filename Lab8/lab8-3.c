#include <stdio.h>

struct vector {
    float x;
    float y;
    float z;
};

int main() {
    struct vector u, v;

    printf("Enter u: ");
    scanf("%f %f %f", &u.x, &u.y, &u.z);
    printf("Enter v: ");
    scanf("%f %f %f", &v.x, &v.y, &v.z);

    float a = (u.y * v.z) - (u.z * v.y);
    float b = (u.z * v.x) - (u.x * v.z);
    float c = (u.x * v.y) - (u.y * v.x);

    printf("u x v = %.1f %.1f %.1f", a, b, c);  

    return 0;
}