#include <iostream>
#include <string>
#include "Exception.h"

int lengthword(std::string str, int forbidden_length) 
{
    if (str.length() == forbidden_length) 
    {
        std::string message = "You have entered a word of forbidden length! Goodbye";
        throw ForbiddenLength(message);
    }
    else 
    {
        return str.length();
    }
}

int main()
{
    std::string str;
    int forbidden_length = 0;

    std::cout << "Enter the forbidden length: ";
    std::cin >> forbidden_length;

    while (true)
    {
        std::cout << "Enter the word: ";
        std::cin >> str;
        try
        {
            std::cout << "The length of the word \"" << str << "\" is " << lengthword(str, forbidden_length) << std::endl;
        }
        catch (const ForbiddenLength& message)
        {
            std::cout << message.what() << std::endl;
            break;
        }
        catch (...)
        {
            std::cout << "Unknown error" << std::endl;
            break;
        }
    }
    return 0;
}
