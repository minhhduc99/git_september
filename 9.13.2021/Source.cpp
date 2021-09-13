#include "Author.cpp"
#include "Book.cpp"

int main(void)
{
	std::vector<Author> authors;

	authors.push_back(Author("duc", "123@gmail.com"));
	authors.push_back(Author("minh", "456@gmail.com"));
	authors.push_back(Author("tran", "789@gmail.com"));

	Book book1("Fighting", authors, 299000);
	std::cout << book1.getAuthorNames() << std::endl;
	return 0;
}