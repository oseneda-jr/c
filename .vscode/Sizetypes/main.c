#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // show type sizes using sizeof
    printf("int size is: %zd\n", sizeof(int));
    printf("char size is: %zd\n", sizeof(char));
    printf("long size is: %zd\n", sizeof(long));
    printf("long long size is: %zd\n", sizeof(long long));
    printf("double size is: %zd\n", sizeof(double));
    printf("long double size is: %zd\n", sizeof(long double));
    return 0;
}
