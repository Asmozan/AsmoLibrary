#ifndef ASMLIBRARY_SORT_HPP
#define ASMLIBRARY_SORT_HPP

namespace asmol
{
    template<typename T>
    void swap(T& first, T& second)
    {
        T temp{0};
        temp = first;
        first = second;
        second = temp;
    }
} // namespace asmol

#endif //ASMLIBRARY_SORT_HPP
