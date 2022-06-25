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
    
    fread(&File.Type, sizeof(File.Type), 1, f);
    fread(&File.Size, sizeof(File.Size), 1, f);
    fread(&File.Reserved1, sizeof(File.Reserved1), 1, f);
    fread(&File.Reserved2, sizeof(File.Reserved2), 1, f);
    fread(&File.BitsPosition, sizeof(File.BitsPosition), 1, f);
    fread(&Picture.PicSize, sizeof(Picture.PicSize), 1, f);
    fread(&Picture.PicWidth, sizeof(Picture.PicWidth), 1, f);
    fread(&Picture.PicHeight, sizeof(Picture.PicHeight), 1, f);
    fread(&Picture.PicPlanes, sizeof(Picture.PicPlanes), 1, f);
    fread(&Picture.PicBitCount, sizeof(Picture.PicBitCount), 1, f);
    fread(&Picture.PicCompression, sizeof(Picture.PicCompression), 1, f);
    fread(&Picture.PicSizeImage, sizeof(Picture.PicSizeImage), 1, f);
    fread(&Picture.PicXres, sizeof(Picture.PicXres), 1, f);
    fread(&Picture.PicYres, sizeof(Picture.PicYres), 1, f);
    fread(&Picture.PicClrUsed, sizeof(Picture.PicClrUsed), 1, f);
    fread(&Picture.PicClrImportant, sizeof(Picture.PicClrImportant), 1, f);
    

}
