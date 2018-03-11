#ifndef ASMLIBRARY_PRINT_HPP
#define ASMLIBRARY_PRINT_HPP

#include <iostream>

namespace asmol
{
    template<typename T>
    void print(const T& container)
    {
        for(const auto& element : container)
        {
            std::cout << element << " ";
        }
        std::cout << "\n";
    }
} // namespace asmol

#endif //ASMLIBRARY_PRINT_HPP
