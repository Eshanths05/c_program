#include <stdio.h>
#include <string.h>

int main() {
    char num[] = "123456789";
    int len = strlen(num);

    for (int i = 0; i < len; i++) {
        printf("%c", num[i]);

        int right = len - i - 1;

        if (right % 3 == 0 && i != len - 1)
            printf(",");
    }
}
