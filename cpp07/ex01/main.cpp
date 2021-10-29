#include "iter.hpp"

// class Awesome {
// public:
//     Awesome(void) : _n(42) {return ;}
//     int get(void) const {return this->_n;}
// private:
//     int _n;
// };
// std::ostream & operator<<(std::ostream & o, Awesome const & rhs) {o << rhs.get(); return o;}

// template<typename T>
// void print( T const & x) {std::cout << x << std::endl; return;}

template <typename T>
void func1(T & arg) {
    arg += 4;
}

int main() {
    {
        int arr[] = {1, 3, 5, 9, 8, 2, -1};
        for (int i = 0; i < 7; i++)
            std::cout << arr[i] << " ";
        iter(arr, 4, func1);
        std::cout << std::endl;
        for (int i = 0; i < 7; i++)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
    {
        char arr[] = {'A', 'd', 'e', 'L', 'q', 'r', 'B'};
        for (int i = 0; i < 7; i++)
            std::cout << arr[i] << " ";
        iter(arr, 5, func1);
        std::cout << std::endl;
        for (int i = 0; i < 7; i++)
            std::cout << arr[i] << " ";
        std::cout << std::endl << std::endl;
    }
    // {
    //     int tab[] = {0, 1, 2, 3, 4};
    //     Awesome tab2[5];

    //     iter(tab, 5, print);
    //     iter(tab2, 5, print);

    //     return (0);
    // }
}