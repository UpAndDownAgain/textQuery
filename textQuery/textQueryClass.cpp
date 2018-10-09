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

void textQueryClass::search_word(std::string &searchWord)
{
	counter = 0;
	occurrences.clear();

	std::string temp;
	for (size_t i = 0; i < lines.size(); ++i) {
		std::stringstream buffer(lines[i]);
		while (buffer >> temp) {
			if (searchWord.compare(temp) == 0) {
				occurrences.insert(i);
			}
		}
	}
}
