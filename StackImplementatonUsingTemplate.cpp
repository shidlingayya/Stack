#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
template<class T>
class myStack
{
public:
    myStack(int s_size = 0) :size(s_size), top(-1) {
        stack = new T[s_size];
    }

    void push(int item)
    {
        if (top == (size-1))
        {
            std::cout << "stack is full" << std::endl;
            return;
        }
        top++;
        stack[top] = item;
    }

    void pop()
    {
        if (top == -1)
        {
            std::cout << "stack is empty" << std::endl;
            return;
        }
        top--;
    }

    void display()
    {
        for(auto i = top;i>=0;i--)
        {
            std::cout << stack[i] << std::endl;
        }
    }

    ~myStack()
    {
        if (stack)
        {
            delete[]stack;
            stack = nullptr;
        }
    }

private:
    T* stack;
    int size;
    int top;
};

int main()
{
    myStack<int> st1(5);
    std::cout << "*************INTEGER STACK****************" << std::endl;
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);
    std::cout << "Display stack elements" << std::endl;
    st1.display();
    std::cout << "Delete elements from stack" << std::endl;
    st1.pop();
    st1.display();

    std::cout << "*************FLOAT STACK****************" << std::endl;
    myStack<float> st2(5);
    std::cout << "Push float into stack" << std::endl;
    st2.push(1.2f);
    st2.push(3.4f);
    st2.push(4.5f);
    st2.push(6.7f);
    std::cout << "Display stack elements" << std::endl;
    st2.display();
    std::cout << "Delete elements from stack" << std::endl;
    st2.pop();
    st2.display();

    std::cout << "*************CHAR STACK****************" << std::endl;
    myStack<char> st3(5);
    std::cout << "Push float into stack" << std::endl;
    st3.push('A');
    st3.push('B');
    st3.push('C');
    st3.push('D');
    std::cout << "Display stack elements" << std::endl;
    st3.display();
    std::cout << "Delete elements from stack" << std::endl;
    st3.pop();
    st3.display();
    std::cout << "*****************************************" << std::endl;
    return 0;
} 