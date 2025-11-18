/******************
Name:orel giladi
ID:217394220
Assignment:ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{

    // Ascii
    /*. Scan one character from the user.
        Then, refer to it as an integer.
        a. Print its value.
        b:
        Print “0”, if its integer representation is even.
        print “1” if its integer representation is odd. */
    printf("Ascii:\n");
    printf("Please enter a character \n");
    char character;
    scanf(" %c", &character);
    printf("Its numerical value is: %d\n",character);
    printf("0 for even, 1 for odd: %d\n",character&1);
    


    // 2's complement and other representations
     /*. Scan a negative integer. [2’s complement].
        Print its value in 1’s complement.
        Print its value as unsigned. */
    printf("\n2's complement to other representations:\n");
    int negativeNumber;
    printf("Please enter a negative integer \n");
    scanf("%d", &negativeNumber);
    printf("1's complement: %d\n", -~(negativeNumber));
    printf("unsigned: %u\n", negativeNumber);
   


    // Shifting right and left
    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */
    printf("Shifting right and left:\n");
    int value, shiftRight, shiftLeft;
    printf("Please enter 3 integers \n");
    scanf("%d %d %d", &value, &shiftRight, &shiftLeft);
    printf("After shifting right and left: %d\n", ((value>>shiftRight)<<shiftLeft));



    // Even - Odd
    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */
    printf("\nEven - Odd:\n");
    int num1, num2, num3;
    printf("Please enter 3 integers \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    int check1 = num1&1;
    int check2 = num2&1;
    int check3 = num3&1;
    int oddOrEven;
    oddOrEven = (check1&check2)|(check2&check3)|(check1&check3);
    printf("0 - most of them are even, 1 - most of them are odd: %d\n", oddOrEven);
   


    // Different Bases
    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */
    printf("\nDifferent Bases:\n");
    int octalNumber, hexadecimalNumber;
    printf("Please enter two numbers in octal and hexadecimal bases\n");
    scanf("%o %x", &octalNumber, &hexadecimalNumber);
    printf("LSBs: %d %d\n", octalNumber&1, hexadecimalNumber&1);
    printf("MSBs: %d %d\n", (octalNumber&(1<<31))>>31, (hexadecimalNumber&(1<<31))>>31);/*our system is based on 32bit so 1<<31 means 1 and after 1, thirty one 0.
    so when we do x&1<<31 we check the MSB 
    for his print we take the result of x&1<<31 (0 or 1) and we do 31 right shifts and print the value (0 or 1) =MSB.*/
    
    



    printf("Bye!\n");

    return 0;
}
