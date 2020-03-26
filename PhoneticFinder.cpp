#include <iostream>
#include "PhoneticFinder.hpp"
using namespace std;

string phonetic::find(string text, string word){
	if (sizeof(word)<3)
		return "word found";
	else
		return "word wasn't found";
}


