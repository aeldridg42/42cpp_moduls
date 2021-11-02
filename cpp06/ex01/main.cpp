#include <iostream>
#include <stdint.h>

struct Data {
    std::string str;
    int num1;
    float num2;
    double num3;
};

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main() {
    Data *data = new Data;
    data->str = "check123";
    data->num1 = 5;
    data->num2 = 12.76f;
    data->num3 = 16.2;

    std::cout << data->str << " " << data->num1 << " " << data->num2 << " " << data->num3 << std::endl << std::endl;

    uintptr_t check1 = serialize(data);
    Data *check2 = deserialize(check1);

    // std::cout << check1 << std::endl;
    std::cout << data << std::endl;
    std::cout << check2 << std::endl << std::endl;

    std::cout << check2->str << " " << check2->num1 << " " << check2->num2 << " " << check2->num3 << std::endl;


    delete data;
}