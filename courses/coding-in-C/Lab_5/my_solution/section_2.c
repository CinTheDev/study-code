#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Please input at least one parameter.\n");
        return 1;
    }

    printf("Using array indexing:\n");
    for (int i = 1; i < argc; i++) {
        printf("Index: %d\n", i);
        printf("Address: %p\n", argv[i]);
        printf("Content: %s\n", argv[i]);
        printf("Length: %ld\n\n", strlen(argv[i]));
    }

    printf("Using pointer indexing:\n");
    for (int i = 1; i < argc; i++) {
        printf("Index: %d\n", i);
        printf("Address: %p\n", *(argv + i));
        printf("Content: %s\n", *(argv + i));
        printf("Length: %ld\n\n", strlen(*(argv + i)));
    }

    return 0;
}
