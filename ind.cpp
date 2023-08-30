#include <stdio.h>
#include <string.h>

void reverse(char *a) {
    int length = strlen(a);
    for (int i = 0; i < length / 2; i++) {
        char temp = a[i];
        a[i] = a[length - i - 1];
        a[length - i - 1] = temp;
    }
}

int main() {
    char a[10];
    for (int i = 0; i < 10; i++) {
        scanf("%c", &a[i]);
    }
    reverse(a);
    printf("Reversed string: %s\n", a);

    return 0;
}
