#include <cstdint>
#pragma once

namespace alt
{
    template<typename T>
    class tupple
    {
    private:

        std::size_t m_size;
        T *m_array;

    public:

        tupple(T *val, std::size_t size);
        tupple();
        ~tupple();



    };


    #include "../src/tupple.tpp"
}
