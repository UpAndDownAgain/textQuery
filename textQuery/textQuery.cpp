// textQuery.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "textQueryClass.h"

int main()
{
	
	std::string input;
	std::cout << "Enter input file: ";
	std::cin >> input;
	
	textQueryClass textQuery(input);
	
	std::cout << "searchword:";
	std::cin >> input;
	
	textQuery.search_word(input);
	textQuery.print_results(std::cout);

    return 0;
}

