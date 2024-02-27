#pragma once 

struct BitmapInfoHeader {
    unsigned int headerSize;
    unsigned int imageWidth;
    unsigned int imageHeigth;
    unsigned short planes;
    short bitsPerPixel;
    unsigned int compression;
    unsigned int imageRawSize;
    unsigned int horizontalResolution;
    unsigned int verticalResolution;
    unsigned int colorPallete;
    unsigned int importantColors;
};

struct BitmapFileHeader {
    unsigned char signature[2];
    unsigned int imageSize;
    short reserved1;
    short reserved2;
    unsigned int pixelDataOffset;
};

typedef struct BitmapFileHeader BFHeader;
typedef struct BitmapInfoHeader BIHeader;

void fillHeader(BFHeader *bf, FILE *fp);


