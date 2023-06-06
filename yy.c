#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    int num;

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        num = rand() % 2 + 1;
        printf("%d\n", num);

        num = rand() % 100 + 1;
        printf("%d\n", num);

        num = rand() % 9;
        printf("%d\n", num);

        num = rand() % 113 + 1000;
        printf("%d\n", num);

        num = rand() % 3 - 1;
        printf("%d\n", num);
    }

    return 0;
}
