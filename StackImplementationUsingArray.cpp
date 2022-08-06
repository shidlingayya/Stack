#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
class myStack
{
public:
    myStack(int s_size = 0) :size(s_size), top(-1) {
        stack = new int[s_size];
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
    int* stack;
    int size;
    int top;
};

int main()
{
    myStack st(5);
    std::cout << "Push elements into stack" << std::endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    std::cout << "Display stack elements" << std::endl;
    st.display();
    std::cout << "Delete elements from stack" << std::endl;
    st.pop();
    st.display();
    return 0;
} 