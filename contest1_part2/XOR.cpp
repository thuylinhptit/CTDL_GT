#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *xor(char *string, const char *key)
{
    char *s = string;
    size_t length = strlen(key), i = 0;
    while (*s) {
            *s++ ^= key[i++ % length];
    }
    return string;
}

int main(int argc, char **argv)
{
    const char *key = "abc";
    if (argc < 2) {
            fprintf(stderr, "%s: no input\n", argv[0]);
            return EXIT_FAILURE;
    }
    printf("%s\n", xor(xor(argv[1], key), key));
    return EXIT_SUCCESS;
}
