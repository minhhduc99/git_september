/*
    Dem so lan xuat hien cua cac ky tu khac nhau trong string
    sau do in ra man hinh 
    vd: string s "abcb";
        in ra: a 1 b 2 c 1
*/

#include <iostream>
#include <map>
#include <vector>


std::vector<std::string> countChar(std::string s)
{
    std::map<char, int> char_map;
    std::vector<std::string> vt_result;

    for (int index1 = 0; index1 < s.size(); ++index1)
    {
        int count = 0;

        for (int index2 = 0; index2 < s.size(); ++index2)
        {
            if (s[index1] == s[index2])
            {
                count = count + 1;
            }
        }

        char_map[s[index1]] = count;
    }

    std::map<char, int>::iterator iter;
    for (iter = char_map.begin(); iter != char_map.end(); ++iter)
    {
        std::string vt_value = "";
        std::string intString = std::to_string(iter->second);
        vt_value = vt_value + iter->first + " " + intString;

        vt_result.push_back(vt_value);
    }

    return vt_result;
}

int main(void)
{
    std::string s = "aacccd";
    std::vector<std::string> vt_result = countChar(s);

    for (auto value : vt_result)
    {
        std::cout << value << " ";
    }

    std::cout << std::endl;
    return 0;
}