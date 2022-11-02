#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main()
{
    /*
    i have been learning to code on c for a few days.
    i hope i will have learned as soon as possible.
    */

    /*
    int (4 bytes) | %d
    double (8 bytes) | %lf
    float (4 bytes) | %f
    char (1 byte) | %c
    */

    /*
    int number1 = 207;
    printf("%d", number1);

    int number2;
    number2 = 35;
    printf("\n%d", number2);

    int number3, number4;
    number3 = 34;
    number4 = 69;
    printf("\n%d \n%d", number3, number4);

    float number5 = 0.22;
    double number6;
    number6 = 50.45;
    printf("\ndecimal number 1 = %.2f decimal number 2 = %.4lf", number5, number6);

    char character1 = 'q';
    printf ("\n%c", character1);
    */

    printf("\nHello, welcome to the app!");
    printf("\nI hope you are happy today :)\n\"I am happy to see you again.\"");

    /*
    int value1;
    printf("\n\nEnter an integer value, please.\n");
    scanf("%d", &value1);
    printf("Your value: %d", value1);

    float value2;
    printf("\n\nEnter a decimal value.\n");
    scanf("%f", &value2);
    printf("Your value 2: %.3f", value2);

    double value3;
    printf("\n\nEnter another decimal value\n");
    scanf("%lf", &value3);
    printf("Your value 3: %.3lf", value3);

    char expression1;
    printf("\n\nEnter a letter.\n");
    scanf(" %c", &expression1);
    printf("Your expression: %c", expression1);
    */

    /*
    int thefirstnumber;
    float thesecondnumber;
    char initialletterofyourname;

    printf("\n\nEnter the first number as integer.\n");
    scanf("%d", &thefirstnumber);

    printf("\nEnter the second number as decimal.\n");
    scanf("%f", &thesecondnumber);

    printf("\nEnter initial letter of your name.\n");
    scanf(" %c", &initialletterofyourname);

    printf("\nThe expressions that you gave:\nthe first number: %d\nthe second number: %.2f\ninitial letter of your name: %c", thefirstnumber, thesecondnumber, initialletterofyourname);
    */


    int yavuz = 911;
    printf("\n\nA random number: %d", yavuz);
    printf("\nThe random number takes up %d bytes in the storage.", sizeof(yavuz));
    printf("\nInt saves %d bytes in the storage.", sizeof(int));

    float abc = 3.342;
    printf("\n\nFloat saves %d bytes in the storage.", sizeof(float));

    double def = 5.47;
    printf("\n\nDouble saves %d bytes in the storage.", sizeof(double));

    const int term = 6;
    printf("\n\n%d", term);

    printf("\n\n%.2f", pi);

    //return 0;
}
