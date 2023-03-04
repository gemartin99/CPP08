#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <list>

#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    std::cout << *easyfind(vec, 4) << std::endl;
    std::cout << *easyfind(vec, 5) << std::endl;

    try { std::cout << *easyfind(vec, 42) << std::endl; }
    catch(const std::exception& e) { std::cerr << e.what() << '\n'; }

    std::list<int> vec2;

    vec2.push_back(100);
    vec2.push_back(3);
    vec2.push_back(10);
    vec2.push_back(4);
    vec2.push_back(30);

    std::cout << *easyfind(vec2, 3) << std::endl;
    std::cout << *easyfind(vec2, 10) << std::endl;
    std::cout << *easyfind(vec2, 100) << std::endl;
    //std::cout << *easyfind(lis, 42) << std::endl; si no catcheo la excepcion

    try { std::cout << *easyfind(vec2, 42) << std::endl; }
    catch(const std::exception& e) { std::cerr << e.what() << '\n'; }

    return (0);
}
