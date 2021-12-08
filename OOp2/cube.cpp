#include "cube.h"
#include <iostream>

cube::cube(square& obj, int h_value) {
	std::cout << "cube(square& obj, int h_value)  " << this << std::endl;
	h = h_value;
	this -> a = obj.a;
}

cube::cube(square& obj) {
	std::cout << "cube(square& obj)  " << this << std::endl;
	h = 5;
	this->a = obj.a;
}

cube::cube(const cube& obj) {
	std::cout << "cube(const cube& obj)  " << this << std::endl;
	h = obj.h;
	a = obj.a;
}

cube::~cube() {
	std::cout << "~cube" << std::endl;
}

int cube::get_volume() {
	return a * a * h;
}

int cube::set_h(int h_value) {
	h = h_value;
	return h;
}
void cube::get_info() {
	square::get_info();
	std::cout << "־בתול = " << get_volume() << std::endl;
}