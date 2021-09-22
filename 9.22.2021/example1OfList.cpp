#include <iostream>
#include <list>
#include <vector>

int sumOfFirstAndLastElement(std::list<int> linkedList);
int verifyFunction(std::vector<int> v);

int main(void)
{
    std::vector<int> new_vector (4, 100);
    std::vector<int> new_vector2 (1, 200);
    std::cout << verifyFunction(new_vector) << " " << verifyFunction(new_vector2);
    std::cout << std::endl;
    return 0;
}

int sumOfFirstAndLastElement(std::list<int> linkedList)
{
    if (linkedList.size() == 0)
    {
        return -1;
    }

    if (linkedList.size() == 1)
    {
        return linkedList.front();
    }
    int sumValues = linkedList.front() + linkedList.back();
    return sumValues;
}

int verifyFunction(std::vector<int> v)
{
    std::list<int> new_list (v.begin(), v.end());
    int sumValues = sumOfFirstAndLastElement(new_list);
    return sumValues;
}