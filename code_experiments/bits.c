#include <stdio.h>

int main() {
    //To start with everything, we must know how computer are able to read information.
    //A computer is able to read information in the form of bits. A bit is a binary digit,
    //which ccan be either 0 or 1. Or in hardware's terms, a bit is a switch that can be 
    //either on or off. A bit is the smallest unit of information in a computer. and a
    //byte is a group of 8 bits. A byte is the smallest unit of information that can be
    //addressed in a computer. Since a byte is a group of 8 bits; we will see it as: 
    //00000000, we can see 8 zeros in there; rather 8 placeholders for information.
    //For example, in variable "a", we have number 5 stored in it. In binary, 5 is
    //represented as 00000101. 

    int a = 5; //----> 00000101

    int b = 2; //----> 00000010

    int c = a + b; //----> 00000101 + 00000010 = 00000111

    printf("c = %d\n", c); //----> c = 7

    return 0;
}