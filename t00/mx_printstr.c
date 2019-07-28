#include <unistd.h>
#include "mx_strlen.c"

void mx_printstr(const char *s) {
    const char* str = s;

    write(1, str, mx_strlen(str));
}

