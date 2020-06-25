#include <iostream>
#include <string>

void reverseString(std::string);

int main()
{
    std::cout << "Input word to reverse: ";

    // GET INPUT
    std::string wordInput;
    std::cin >> wordInput;

    // OUTPUT
    std::cout << "Original Input: " << wordInput << std::endl;
    std::cout << "Reverse String:";

    reverseString(wordInput); // FOO CALL

    std::cout << std::endl << "Word Length: " << wordInput.length() << std::endl;
    
    // STOP
    std::cin.get();
    return 0;
}

void reverseString(std::string s)
{ 
    // PRINT REVERSE
    for (int i = s.length(); i >= 0; i--)
    {
        std::cout << s[i];
    }
}
