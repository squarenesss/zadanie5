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

struct PHeader {
    int PicSize;
    int PicWidth;
    int PicHeight;
    short PicPlanes;
    short PicBitCount;
    int PicCompression;
    int PicSizeImage;
    int PicXres;
    int PicYres;
    int PicClrUsed;
    int PicClrImportant;
} Picture;

int main(int arc, char * argv[]) {
    
     FILE* f = fopen("test.bmp", "r");
    
}
