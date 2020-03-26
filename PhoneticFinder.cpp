#include <iostream>
#include "PhoneticFinder.hpp"
using namespace std;

string phonetic::find(string text, string word){
	if (sizeof(word)<3)
		return "initial test";
	else
		throw std::invalid_argument( "word wasn't found" );
}


