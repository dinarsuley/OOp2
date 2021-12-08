#pragma once
#include <iostream>
class square
{
private:
	int get_plochad();
public: 
	int a;
	square();
	square(int a_value, int h_value);
	square(const square& obj);

	~square();

	void get_info();

};

