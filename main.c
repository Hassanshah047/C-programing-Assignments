#include <stdio.h>
#include <stdlib.h>

int main()
{
    int week;
    /* input week number by user */
    printf("Enter week number (1-7):");
    scanf("%d", &week);
    switch(week)
    {
    case 1:
        printf("\nMonday""\nICT""\nProf Asfand Yar");
        break;
    case 2:
        printf("\nTuesday""\nProgramming Fundamentals""\nProf Imran Ali");
        break;
    case 3:
        printf("\nWednesday""\nApplied Physics""\nProf Shams Ullah");
        break;
    case 4:
        printf("\nThursday""\nEnglish Composition""\nProf Mir Sadaat");
        break;
    case 5:
        printf("\nFriday""\nMathematics""\nProf Naveed Sheikh");
        break;
    case 6:
        printf("\nSaturday""\nOFF""University is officially Off");
        break;
    case 7:
        printf("\nSunday""\nOFF""\nUniversity is officially off");
        break;
    default:
        printf("Invalid input! Please enter week number between 1_7.");
    }

    return 0;
}
