#pragma once
#include <iostream>

class Author
{
private:
	std::string name;
	std::string email;
public:
	Author(std::string name, std::string email)
	{
		this->email = email;
		this->name = name;
	}

	void setName(std::string name)
	{
		this->name = name;
	}

	void setEmail(std::string email)
	{
		this->email = email;
	}

	std::string getName(void)
	{
		return name;
	}

	std::string getEmail(void)
	{
		return email;
	}
};