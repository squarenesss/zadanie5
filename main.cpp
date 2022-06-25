#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Header {
    short Type;
    int Size;
    short Reserved1;
    short Reserved2;
    int BitsPosition;
} File;

