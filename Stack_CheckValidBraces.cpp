#include <iostream>
#include <stack>
#include <string>

std::string isBalanced(std::string braces)
{
	std::stack<char> myStack{};
	for (auto i = 0; i < braces.size(); i++)
	{
		if (braces[i] == '[' || braces[i] == '{' || braces[i] == '(')
		{
			myStack.push(braces[i]);
			continue;
		}

		if (myStack.empty())
		{
			return "No";
		}

		char ch = 0;
		switch (braces[i])
		{
		case ')':
			ch = myStack.top();
			myStack.pop();
			if (ch == '{' || ch == '[')
			{
				return "No";
			}
			break;
		case '}':
			ch = myStack.top();
			myStack.pop();
			if (ch == '[' || ch == '(')
			{
				return "No";
			}
			break;
		case ']':
			ch = myStack.top();
			myStack.pop();
			if (ch == '{' || ch == '(')
			{
				return "No";
			}
			break;
		}
	}
	if (myStack.empty())
	{
		return "Yes";
	}
	else
	{
		return "No";
	}
}

int main() {
    std::string braces = "{[()]}";
	std::cout << "check if expr " << braces << " is balanced:" << isBalanced(braces) << std::endl;

	braces = "{[()]";
	std::cout << "check if expr " << braces << " is balanced:" << isBalanced(braces) << std::endl;

	braces = "{{[[(())]]}}";
	std::cout << "check if expr " << braces << " is balanced:" << isBalanced(braces) << std::endl;

	return 0;
}
