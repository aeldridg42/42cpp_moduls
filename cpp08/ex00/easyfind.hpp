#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template <typename T>
int easyfind(T & cont, int arg) {
    typename T::iterator ptr = std::find(cont.begin(), cont.end(), arg);
    if (ptr == cont.end())
        throw std::string("can't find");
    return *ptr;
}

#endif
