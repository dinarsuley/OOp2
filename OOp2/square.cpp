#include "square.h"
#include <string.h>

square::square() {
	std::cout << "square()  " << this << std::endl;
	a = 5;
}
square::square(int a_value, int h_value) {
	a = a_value;
	std::cout << "square(int a_value)  " << this << std::endl;
}
square::square(const square& obj) {
	a = obj.a;
	std::cout << "square(square& obj)  " << this << std::endl;
}

square::~square() {
	std::cout << "~square()  " << this << std::endl;
}


int square::get_plochad() {;
	return a*a;
}
void square::get_info() {
	std::cout<< "a = " << a << " Площадь = " << get_plochad() << std::endl;
}