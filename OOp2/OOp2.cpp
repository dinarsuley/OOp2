#include <iostream>
#include "square.h"
#include "cube.h"

void main()
{
    setlocale(LC_ALL, "Russian");

    square *ds = new square;
    delete ds;
    std::cout << "-----" << std::endl;
    square s1;
    s1.get_info();
    std::cout << "-----" << std::endl;
    square s2(10, 5);
    s2.get_info();
    std::cout << "-----" << std::endl;
    square s3(s2);
    s3.get_info();
    std::cout << "--------------------------" << std::endl;
    
    cube* dc = new cube(s1);
    delete dc;
    std::cout << "-----" << std::endl;
    cube c1(s1);
    c1.set_h(6);
    c1.get_info();
    std::cout << "-----" << std::endl;
    cube c2(s2, 6);
    c2.get_info();
    std::cout << "-----" << std::endl;
    cube c3(c2);
    c3.get_info();
    std::cout << "-----" << std::endl;
}