#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer cmptr;
    cmptr.cpu_speed_GHz = 4.5432;
    cmptr.ram_size_GB = 400;
    cmptr.bits = 23;

    Notebook ntbk;
    ntbk.cpu_speed_GHz = 3.1234;
    ntbk.ram_size_GB = 400;
    ntbk.bits = 32;

    printf("Computer's CPU Speed: %.2f GHz, RAM Size: %d GB and %d bits.\n", cmptr.cpu_speed_GHz, cmptr.ram_size_GB, cmptr.bits);
    printf("Notebook's CPU Speed: %.2f GHz, RAM Size: %d GB and %d bits.\n", ntbk.cpu_speed_GHz, ntbk.ram_size_GB, ntbk.bits);


    return 0;
}