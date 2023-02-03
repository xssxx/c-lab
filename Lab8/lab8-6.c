#include <stdio.h>

struct complex {  
    float a;
    float b;
};

struct complex add_complex(struct complex C, struct complex D) {
    struct complex ans;
    ans.a = C.a + D.a;
    ans.b = C.b + D.b;
    return ans;
}

struct complex multiply_complex(struct complex C, struct complex D) {
    struct complex ans;
    ans.a = (C.a * D.a) - (C.b * D.b); 
    ans.b = (C.a * D.b) + (C.b * D.a);
    return ans;
    }

void print_complex(char *prop, struct complex num) {
    printf("%s", prop);
    if (num.a && num.b > 0) {
        printf("%.1f + %.1fi\n", num.a, num.b);
    } else if (num.a && num.b < 0 ) {
        printf("%.1f - %.1fi\n", num.a, -num.b);
    } else if (num.a) {
        printf("%.1f\n", num.a);
    } else if (num.b) {
        printf("%.1fi\n", num.b);
    } else {
        printf("%.1f\n", num.a);
    }
}

int main() {
    struct complex C, D, E, F;

    printf("Enter C: ");
    scanf("%f %f", &C.a, &C.b);
  
    printf("Enter D: ");
    scanf("%f %f", &D.a, &D.b);

    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}