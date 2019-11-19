#include <stdio.h>
#include <stdlib.h>



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


void get_size(char* path)
{
    FILE* fptr = NULL;
    if (!(fptr = fopen(path, "rb"))) return;

    char* read_data = (char*)malloc(6 * sizeof(char));
    fread(read_data, sizeof(char), 6, fptr);

    for (int i = 2; i < 6; ++i) {
        printf("%d", read_data[i]);
    }

}




int main(int argc, char* argv[]) {
    if(argc == 1) {
        print_usage();
    }

    get_size("T.bmp");


    return 0;
}