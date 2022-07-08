#include <iostream>
#include <stack>

int main()
{ 
    std::string str = "Hello World";
    std::stack<char> myStack{};
    int i = 0;
    while (i < str.size())
    {
        myStack.push(str[i]);
        i++;
    }

    std::string reversedStr = "";
    while (!myStack.empty())
    {
        reversedStr += myStack.top();
        myStack.pop();
    }
    std::cout << "Reversed str: " << reversedStr << std::endl;
    return 0;
}