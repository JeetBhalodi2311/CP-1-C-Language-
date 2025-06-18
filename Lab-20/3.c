#include <stdio.h>

void main() {
    int val = 1; 

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", val);
            val = 1 - val; //toggle val(0->1 , 1->0)
        }
        printf("\n");
    }
}
