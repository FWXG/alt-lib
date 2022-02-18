#include <cstdint>
#pragma once

namespace alt
{
    template<typename T>
    class smart_pointer
    {
    private:

        T *m_ptr;

        static std::size_t counter;

    public:

        smart_pointer(T *ptr);
        ~smart_pointer();

        smart_pointer(smart_pointer& p);

        T& operator*() const;

    };

    #include "../src/point.tpp"
}
