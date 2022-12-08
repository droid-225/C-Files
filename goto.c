#include <stdio.h>

void main() {
    /*
    label: 
        printf("We are inside the label\n");
        goto end; // jumps to end, skips printf and goto label
    printf("Hello Wolrd\n");

    goto label;
    end:
        printf("We are at end");
    */

    int num;
    for(int i = 0; i < 8; i++) {
        printf("%d", i);
        for(int j = 0; j < 8; j++) {
            printf("Enter the number (enter 0 to exit): ");
            scanf("%d", &num);
            if (num == 0) 
                goto end;
        }
    }
    end:
}