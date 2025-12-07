
#include <stdio.h>

int main() {
    FILE *fp;
    char c;

    fp = fopen("no", "r");   
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {   
        putchar(c);                    
    }

    fclose(fp);    
    return 0;
}
