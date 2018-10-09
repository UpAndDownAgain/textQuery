#include "stdafx.h"
#include "textQueryClass.h"


textQueryClass::textQueryClass()
{
}

textQueryClass::textQueryClass(std::string& s)
{
	std::ifstream input_file;

	input_file.open(s);
	if (input_file.is_open()) {

		std::stringstream buffer;
		std::string temp;
		
		buffer << input_file.rdbuf();
		input_file.close();

		while (buffer >> temp) {
			lines.push_back(temp);
		}
	}
}


textQueryClass::~textQueryClass()
{
}
