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

		std::string temp;
		
		while (std::getline(input_file, temp)) {
			lines.push_back(temp);
		}
	}
	else
		std::cout << "no file";
}


textQueryClass::~textQueryClass()
{
}

void textQueryClass::search_word(std::string &searchWord)
{
	counter = 0;
	occurrences.clear();
	_searchWord = searchWord;

	std::string temp;
	for (size_t i = 0; i < lines.size(); ++i) {
		std::stringstream buffer(lines[i]);
		while (buffer >> temp) {
			if (searchWord.compare(temp) == 0) {
				++counter;
				occurrences.insert(i);
			}
		}
	}
}

std::ostream& textQueryClass::print_results(std::ostream& os)
{
	os << "element - " << _searchWord << " occurs " << counter << " times\n";
	for (auto item : occurrences) {
		os << "Line: " << item << " " << lines[item] << std::endl;
	}
	return os;
}
