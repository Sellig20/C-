#include "Data.hpp"

uintptr_t   serialize(Data *ptr)
{
    uintptr_t   res;

    res = reinterpret_cast<uintptr_t>(ptr);
    return (res);
}

Data    *deserialize(uintptr_t raw)
{
    Data    *res;

    res = reinterpret_cast<s_Data*>(raw);
    return (res);
}

int main()
{
    Data        *ptr;
    Data        *ptr_new;
    uintptr_t   nb;

    ptr = new Data;
    ptr->data = "hello magicponey";
    nb = serialize(ptr);
    ptr_new = deserialize(nb);

    std::cout << " --- BEFORE --- " << std::endl;
    std::cout << "Address of ptr : " << ptr << std::endl;;
    std::cout << "Value of ptr : " << ptr->data << std::endl;
    std::cout << " --- AFTER --- " << std::endl;
    std::cout << "Address of ptr_new : " << ptr_new << std::endl;
    std::cout << "Value of ptr_new : " << ptr_new->data << std::endl;
    
    delete ptr;

}