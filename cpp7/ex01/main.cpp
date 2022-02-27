#include <iostream>
#include "iter.hpp"

int main( void ) {

std::cout << "\nintegers:\n";
int intarr[] = { 100, 200, 300, -123};
::iter(intarr, 4, doublePrint<int>);
std::cout << "\nstrings:\n";
std::string strarr[] = {
	"Hola!", "Hello!", "Hej!", "Hallo!", "Kamusta!"
};
::iter(strarr, 5, doublePrint<std::string>);
return 0;
}