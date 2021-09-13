#include "Author.cpp"
#include <vector>

class Book
{
private:
    std::string name;
    std::vector<Author> authors;
    double price;
public:
    Book(std::string name, std::vector<Author> authors, double price)
    {
        this->name = name;
        this->authors = authors;
        this->price = price;
    }

    void setName(std::string name)
    {
        this->name = name;
    }

    void setPrice(double price)
    {
        this->price = price;
    }

    std::string getName(void)
    {
        return name;
    }

    double getPrice(void)
    {
        return price;
    }

    std::string getAuthorNames(void)
    {
        std::string authors_name = "";
        int vector_size = authors.size();

        for (int i = 0; i < vector_size - 1; i++)
        {
            authors_name += authors[i].getName() + ", ";
        }

        authors_name += authors[vector_size - 1].getName();
        return authors_name;
    }

};