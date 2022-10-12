#include <stack>
#include "Stack.hpp"
#include <iostream>
int main() {
    ft::stack<int> a;
    ft::stack<int> b;
    for (size_t i = 0; i < 10; i++)
    {
        b.push(i);
        a.push(i);
    }
    std::cout << b.size() << std::endl;
    std::cout << b.empty() << std::endl;
    std::cout << b.top() << std::endl;
    if (a == b)
    std::cout << q << std::endl;
}