#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>
#include <deque>

int main() {
    {
        std::list<int> lst1;
        // std::vector<int> lst1;
        // std::deque<int> lst1;

        lst1.push_back(12);
        lst1.push_back(132);
        lst1.push_back(22);
        lst1.push_back(432);
        lst1.push_back(-12);

        try {
            std::cout << easyfind(lst1, -12) << std::endl;
        }
        catch (const std::string & e){
            std::cout << e << std::endl;
        }
    }
    std::cout << std::endl;
    {
        try {
            std::string f("check");
            std::cout << (char)easyfind(f, 'e') << std::endl;
        }
        catch (const std::string & e){
            std::cout << e << std::endl;
        }
    }
}