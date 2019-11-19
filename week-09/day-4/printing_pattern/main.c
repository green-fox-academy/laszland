#include <stdio.h>


int main() {

    int number;

    printf("Give me an integer! ");
    scanf("%d", &number);

    int length = 2 * number - 1;
    int min;

    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < length; ++j) {
            min = i < j ? i : j;
            min = min < length - i ? min : length - i - 1;
            min = min < length - j - 1 ? min : length - j - 1;
            printf("%d", number - min);
        }
        printf("\n");

    }
    return 0;
}