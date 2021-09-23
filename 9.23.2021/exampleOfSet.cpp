// In ra 1 vector chua cac phan tu unique

#include <iostream>
#include <set>
#include <vector>

std::vector<std::vector<int>> uniqueRows(std::vector<std::vector<int>> matrix)
{
    std::set<std::vector<int>> s;
    std::vector<std::vector<int>> result;

    for(std::vector<std::vector<int>>::iterator it = matrix.begin();it!=matrix.end();it++){
        if(!s.count(*it))
        {
           s.insert(*it);
           result.push_back(*it);
        }
    }
    return result;
}

int main(void)
{
    std::vector<std::vector<int>> matrix = {
        {1, 1, 0, 1},
        {1, 0, 0, 1},
        {1, 1, 0, 1}
    };

    matrix = uniqueRows(matrix);
    for (int row = 0; row < matrix.size(); ++row)
    {
        for (int column = 0; column < 4; ++column)
        {
            std::cout << matrix[row][column] << ' ';
        }

        std::cout << std::endl;
    }

    return 0;
}