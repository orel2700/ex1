/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{

    // Ascii
    printf("Ascii:\n");
    char character;
    scanf(" %c", &character);
    printf("%d\n", character);
    printf("%d\n", character&1);
    /*. Scan one character from the user.
        Then, refer to it as an integer.
        a. Print its value.
        b:
        Print “0”, if its integer representation is even.
        print “1” if its integer representation is odd. */

    // 2's complement and other representations
    printf("\n2's complement to other representations:\n");
    int NegativeNumber;
    scanf("%d", &NegativeNumber);
    printf("1's complement: %d\n", -~(NegativeNumber));
    printf("unsigned: %u\n", (unsigned)NegativeNumber);
    /*. Scan a negative integer. [2’s complement].
        Print its value in 1’s complement.
        Print its value as unsigned. */

    // Shifting right and left
    printf("\nShifting right and left:\n");
    int Value, ShiftRight, ShiftLeft;
    scanf("%d %d %d", &Value, &ShiftRight, &ShiftLeft);
    printf("%d\n", ((Value>>ShiftRight)<<ShiftLeft));
    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */

    // Even - Odd
    printf("\nEven - Odd:\n");
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    int check1 = num1&1;
    int check2 = num2&1;
    int check3 = num3&1;
    int OddOrEven;
    OddOrEven = (check1&check2)|(check2&check3)|(check1&check3);
    printf("0 - most of them are even, 1 - most of them are odd: %d\n", OddOrEven);
    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */

    // Different Bases
    printf("\nDifferent Bases:\n");
    int octalnumber, hexadecimalnumber;
    scanf("%o %x",&octalnumber, &hexadecimalnumber);
    printf("%d%d\n", octalnumber&1,(octalnumber&(1<<31))>>31);
    printf("%d\n", hexadecimalnumber&1,(hexadecimalnumber&(1<<31))>>31);


    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */

    printf("Bye!\n");

    return 0;
}
