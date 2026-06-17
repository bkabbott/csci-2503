#include <stdio.h>

int main() {
    printf("Test\n");

    goto AFTERLOOP;
    BEFORELOOP:
    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

    AFTERLOOP:
    printf("Skipped loop?\n");
    goto BEFORELOOP; // Activity: uncomment this, what happens?
    return 0;
}