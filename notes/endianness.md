# There are two types of memory positioning

Suppose that we have 0x12345678

We get bytes of: 12 34 56 78

and it begins at address 0x1000

# Big-Endian

The bytes appear in memory in the same left to right order as the hexadecimal number

Where:

0x1000 -> 12
0x1001 -> 34
0x1002 -> 56
0x1003 -> 78

The big-endian having the most significant number at the lowest address

# Little-Endian

The bytes appear in memory in reverse

Where:

0x1000 -> 78
0x1001 -> 56
0x1002 -> 34
0x1003 -> 12

The little-endian having the least significant number at the lowest address

# Why it exists

The names came from which "end" of the number is stored first at the lowest memory address. 

the CPU still interprets all four bytes together as: 0x12345678

The numerical value is not reversed. Only the order in which its bytes are arranged in memory is different. 

# Relevance

Most modern desktop CPUs you'll encounter, especially x86 and x86-64 systems, are little-endian. So on a typical PC, this would normally occupy memory like: 

0x1000 -> 78
0x1001 -> 56
0x1002 -> 34
0x1003 -> 12

