# Notes Chapter 1

Rule: Every C++ program must have a function named main

The main memory in a computer is called Random Access Memory (often called RAM for short). When we run a program, the operating system loads the program into RAM. Any data that is hardcoded into the program itself (e.g. text such as “Hello, world!”) is loaded at this point.

In C++, direct memory access is discouraged. Instead, we access memory indirectly through an object. An object represents a region of storage (typically RAM or a CPU register) that can hold a value. 

An object with a name is called a variable.

Each variable has an identifier, a type, and a value;

List-initialization disallows narrowing conversions

In C++, we use single quotes to represent single characters (such as 'a' or '$'), and double-quotes to represent text

std::cout & std::cin are buffered (FIFO)

Each line of input data in the input buffer is terminated by a '\n' character.

For example, given the following snippet:

int x{};
std::cin >> x;
Here’s what happens in a three different input cases:

If the user types 5a and enter, 5a\n will be added to the buffer. 5 will be extracted, converted to an integer, and assigned to variable x. a\n will be left in the input buffer for the next extraction.
If the user types ‘b’ and enter, b\n would be added to the buffer. Because b is not a valid integer, no characters can be extracted, so this is an extraction failure. Variable x would be set to 0, and future extractions will fail until the input stream is cleared.
If std::cin is not in a good state due to a prior failed extraction, nothing happens here. The value of variable x is not altered.

For example, given the following snippet:

int x{};
std::cin >> x;
Here’s what happens in a three different input cases:

If the user types 5a and enter, 5a\n will be added to the buffer. 5 will be extracted, converted to an integer, and assigned to variable x. a\n will be left in the input buffer for the next extraction.
If the user types ‘b’ and enter, b\n would be added to the buffer. Because b is not a valid integer, no characters can be extracted, so this is an extraction failure. Variable x would be set to 0, and future extractions will fail until the input stream is cleared.
If std::cin is not in a good state due to a prior failed extraction, nothing happens here. The value of variable x is not altered.

For example, given the following snippet:

int x{};
std::cin >> x;
Here’s what happens in a three different input cases:

If the user types 5a and enter, 5a\n will be added to the buffer. 5 will be extracted, converted to an integer, and assigned to variable x. a\n will be left in the input buffer for the next extraction.
If the user types ‘b’ and enter, b\n would be added to the buffer. Because b is not a valid integer, no characters can be extracted, so this is an extraction failure. Variable x would be set to 0, and future extractions will fail until the input stream is cleared.
If std::cin is not in a good state due to a prior failed extraction, nothing happens here. The value of variable x is not altered.

When a variable that is not initialized is given a memory address to use to store data, the default value of that variable is whatever (garbage) value happens to already be in that memory address! 

Undefined behavior is like a box of chocolates. You never know what you’re going to get!

Behavior that is defined by the implementation is called implementation-defined behavior. For ex: sizeof(int) will be 4 on most platforms but could be 2.

Best practice: avoid unspecified behavior and implementation-defined behavior

