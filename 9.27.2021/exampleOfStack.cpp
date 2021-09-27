/*  
    Cho 2 vector da duoc sap xep khong giam, merge 2 vector do
    sao cho vector moi cung sap xep khong giam
*/

#include <iostream>
#include <stack>
#include <vector>

std::vector<int> stackConcat(std::vector<int> a, std::vector<int> b)
{
    std::stack<int> st1;
    std::stack<int> st2;
    std::stack<int> st3;
    std::vector<int> vt_temp;

    for (auto value : a)
    {
        st1.push(value);
    }

    for (auto value : b)
    {
        st2.push(value);
    }

    while (st1.size() != 0 && st2.size() != 0)
    {
        if (st1.top() > st2.top())
        {
            st3.push(st1.top());
            st1.pop();
        }

        else
        {
            st3.push(st2.top());
            st2.pop();
        }
    }

    while (!st1.empty())
    {
        st3.push(st1.top());
        st1.pop();
    }

    while (!st2.empty())
    {
        st3.push(st2.top());
        st2.pop();
    }

    while (!st3.empty())
    {
        vt_temp.push_back(st3.top());
        st3.pop();
    }

    return vt_temp;
}

int main(void)
{
    std::vector<int> vector1 = {1, 3, 6, 8};
    std::vector<int> vector2 = {1, 2, 5};

    std::vector<int> vt_result = stackConcat(vector1, vector2);

    for (auto value : vt_result)
    {
        std::cout << value << " ";
    }

    std::cout << std::endl;
    return 0;
}