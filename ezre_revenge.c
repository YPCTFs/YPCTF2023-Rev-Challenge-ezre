#include <stdio.h>
#include "string.h"
#include <stdlib.h>

// YPCTF{e6b1912c78b14f7c2bba7f9c34b376f1}
static char flag[] = "xIuDLDEvJKuDGyJvEuutJyLvFGuFJIyD";

int main() {

    printf("please input flaghere: ");
    char input[100];
    scanf("%32s", input);

    if (strlen(input) != 32) {
        printf("wrong flag!\n");
        return 0;
    }

    char *buf = malloc(32);

    for (int i = 0; i < 32; ++i) {
        buf[i] = input[i] + 0x13;
    }

    if (strcmp(buf, flag) != 0) {
        printf("wrong flag!\n");
        goto OUT;
    }

    printf("Your flag is YPCTF{%s}\n", input);
    OUT:
    free(buf);
    return 0;
}
