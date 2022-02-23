#include <fstream>
#include <iostream>
#include <string>

#pragma once

namespace alt
{
    class constants
    {
    private:

        static std::string pi_num;
        static std::string eu_num;
        static std::string tau_num;
        static std::string gold_num;
        static std::string eu_mask_num;

        constants() = delete;

    public:

        static std::string get_pi();
        static std::string get_eu();
        static std::string get_tau();
        static std::string get_gold();
        static std::string get_eu_mask();

    };


}







