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
	
public:
	textQueryClass();
	textQueryClass(std::string&);
	~textQueryClass();
};

