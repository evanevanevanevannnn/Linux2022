#include <stdio.h>

enum {
    BUFF_SIZE = 1024
};

int main(void) {
    
    char buff[BUFF_SIZE];
    scanf("%s", buff);
    printf("Hello, %s!\n", buff);

    return 0;
}
