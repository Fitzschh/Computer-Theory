#include <stdio.h>

int main() {
    //To conceptually demonstrate how memory works in C, we will declare a few 
    //variables and perform some operations on them. For starters, take a look
    // at variable "a", we know that a is 00000101 in binary. But how do we 
    //store it? These variables are stored in RAM. Conceptually, a RAM has
    //addresses in it, these addresses are where these informations are stored.
    //For example, inside the RAM we see: 0x1000, 0x1001, 0x1002, 0x1003. We 
    //use these addresses to store 00000101 or 5 as a human readable integer. 
    //Conceptually we get: 0x1000 ---> 00000101. 0x1001 ---> 00000010. And so
    //on. However, an integer; consists of 4 bytes. So a single integer will
    //consume 4 bytes, meaning 4 addresses must be allocated to store this one
    //integer.

    int a = 5;
    int b = 2;
    int c = a + b;

    //So in reality, we get: 0x1000 ---> 00000101, 0x1001 ---> 00000000, 0x1002 ---> 00000000,
    //0x1003 ---> 00000000. Just for the line: int a = 5; Consuming 4 addresses for 4 bytes. 

}