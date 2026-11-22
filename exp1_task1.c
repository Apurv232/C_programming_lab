#include <stdio.h>

// Variables storing the details
int main()
{
    char name[] = "Apurv Dalal";
    int age = 18;
    char student_class[] = "First year";
    char division = 'C';
    char uin[] = "261P054";

    // Printing the formatted output using escape sequences
    printf("=====================================\n");
    printf("   STUDENT PROFILE      \n");
    printf("=====================================\n");
    printf("Name:\t\t%s\nAge:\t\t%d\nClass:\t\t%s\nDivision:\t%c\nUIN:\t\t%s\n",
           name, age, student_class, division, uin);
    printf("=====================================\n");

    return 0;
}
