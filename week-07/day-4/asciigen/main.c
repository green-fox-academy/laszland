#include <stdio.h>



void print_usage()
{
    printf("\n");
    printf("\n");
    printf("ARCII Art generator application\n");
    printf("===============================\n");
    printf("\n");
    printf("asciiartgen <path-to-source-bmp> <options>...\n");
    printf("\n");
    printf("Available <options>:\n");
    printf("\t-size               prints out the size of the BMP file in bytes\n");
    printf("\t-w                  prints out the width of the BMP file\n");
    printf("\t-h                  prints out the height of the BMP file\n");
    printf("\t-depth              prints out the color depth of the BMP file\n");
    printf("\t-o <path-to-txt>    specify where to put the resulting txt file\n");
    printf("\t-mono               convert the BMP picture as monochromatic txt,\n");
    printf("\t                    non-white pixels will be represented with x characters\n");
    printf("\t-mono <character>   convert the BMP picture as monochromatic txt,\n");
    printf("\t                    <character> will be used to represent non-white pixels\n");
    printf("\t-regular            convert the BMP picture as multiple colored txt\n");
    printf("\n");
    printf("\n");
}




int main(int argc, char* argv[]) {
    if(argc == 1) {
        print_usage();
    }

    return 0;
}