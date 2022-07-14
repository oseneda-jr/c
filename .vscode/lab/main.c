#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // variables declaration
    int minutes;
    float minutesInYear;
    float years;
    float days;

    // get minutes by keyboard
    printf("Informe minutos para converter em anos e dias: ");
    scanf("%d", &minutes);

    // calculate number of minutes in a year
    minutesInYear = 365.0 * 24.0 * 60.0;
    printf("%.0f\n", minutesInYear);
    
    // do the calculations
    years = minutes / minutesInYear;
    printf("%d\n", (int) years);

    days = minutes / (24*60);
    printf("%d\n", (int) days);
 
    return 0;
}
