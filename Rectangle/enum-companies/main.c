#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // declare type enum
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    // declare variables of enum Company type
    enum Company company1, company2, company3;

    // assign values to variables
    company1 = XEROX;
    company2 = GOOGLE;
    company3 = EBAY;

    printf("Companies are:\n%d\n%d\n%d", company1, company2, company3);

    return 0;
}
