#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc > 1)
        printf(argv[1]);
    else
        printf(argv[0]);
}
