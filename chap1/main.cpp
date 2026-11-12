#include <iostream> //preprocessor directive

int main()
{
    std::cout << "Hello world again!" << std::endl; // /n preffered 

    int x = 10;
    std::cout << x;

    int a; // default-initialization (no initializer)

    // Traditional initialization forms:
    int b = 5; // copy-initialization (initial value after equals sign)
    int c(6);  // direct-initialization (initial value in parenthesis)

    // Modern initialization forms (preferred):
    int d{7}; // direct-list-initialization (initial value in braces)
    int e{};  // value-initialization (empty braces)

    int width {}; // value-initialization / zero-initialization to value 0

    int i { 9 }, f { 10 };     // direct-list-initialization

    [[maybe_unused]] double pi { 3.14159 };  // Don't complain if pi is unused

    std::cout << "Hello" << " world concated style";

    std::cout << "Enter a number:";
    int num{};
    std::cin >> num;
    std::cout << "You entered " << num;




    return 0; // 0 = "everything went okay"
}
