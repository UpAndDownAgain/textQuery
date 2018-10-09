#pragma once
#include <fstream>
#include <vector>
#include <set>
#include <map>
#include <istream>
#include <string>
#include <sstream>

class textQueryClass
{
private:
	std::vector<std::string> lines;
	size_t counter;
	std::set<int> occurrences;
	
public:
	textQueryClass();
	textQueryClass(std::string&);
	~textQueryClass();

	void search_word(std::string &);
};

