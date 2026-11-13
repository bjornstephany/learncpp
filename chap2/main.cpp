#include <iostream>

void print()
{
    std::cout << "PRINT!\n";
}

int getIntFromUser()
{
    std::cout << "Enter your favorite integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int add(int x, int y)
{
    return x + y;
}

int main()
{
    std::cout << "Starting main()\n";
    print();
    std::cout << "Ending main()\n";
    
    int num { getIntFromUser() };
    std::cout << "Your favorite integer is " << num;

    return 0;
}
