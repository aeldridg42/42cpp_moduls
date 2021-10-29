#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void iter(T *arr, int size, void (*func)(T &arg)) {
    for (int i = 0; i < size; i++)
        func(arr[i]);
}

// template<typename T>
// void iter(T *arr, int size, void (*func)(T const &arg)) {
//     for (int i = 0; i < size; i++)
//         func(arr[i]);
// }

#endif