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
    printf(" Plik test.bmp zostal otwarty \n");
    
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
    
    printf(" Informacje o pliku BMP\n");
    printf(" Typ: %x", File.Type);
    printf("\n Rozmiar pliku: %d bajtow", File.Size);
    printf("\n Zarezerwowane 1: %d", File.Reserved1);
    printf("\n Zarezerwowane 2: %d", File.Reserved2);
    printf("\n Pozycja danych obrazkowych: %d", File.BitsPosition);
    printf("\n Wielkosc naglowka informacyjnego: %d", Picture.PicSize);
    printf("\n Szerokosc obrazka: %d pikseli", Picture.PicWidth);
    printf("\n Wysokosc obrazka: %d pikseli", Picture.PicHeight);
    printf("\n Liczba platow: %d", Picture.PicPlanes);
    printf("\n Ilosc bitow na piksel: %d (1, 4, 8, or 24)", Picture.PicBitCount);
    printf("\n Kompresja: %d (0=none, 1=RLE-8, 2=RLE-4)", Picture.PicCompression);
    printf("\n Rozmiar samego rysunku: %d", Picture.PicSizeImage);
    printf("\n Rozdzielczosc pozioma obrazka: %d", Picture.PicXres);
    printf("\n Rozdzielczosc pionowa obrazka: %d", Picture.PicYres);
    printf("\n Ilosc kolorow: %d", Picture.PicClrUsed);
    printf("\n Ilosc waznych kolorow: %d", Picture.PicClrImportant);
}

    printf("\n\n Tworzenie negatywu pliku test.bmp");

    FILE* w = fopen("negatyw.bmp", "w+");
    printf("Plik negatyw.bmp zostal otwarty");


