#include <iostream>
#include <stdint.h>

struct Data {
    std::string str;
};

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main() {
    Data data;
    data.str = "check123";

    uintptr_t check1 = serialize(&data);
    Data *check2 = deserialize(check1);

    std::cout << &data << std::endl;
    std::cout << &check1 << std::endl;
    std::cout << check2 << std::endl << std::endl;

    std::cout << check2->str << std::endl;
}