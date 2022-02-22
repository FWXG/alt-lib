#include <fstream>
#include <iostream>
#include <string>
#pragma once

namespace alt
{
    class constants
    {
    private:

        std::fstream pi_file;
        std::fstream eu_file;
        std::fstream tau_file;
        std::fstream gold_file;
        std::fstream eu_mask_file;

        std::string pi_num;
        std::string eu_num;
        std::string tau_num;
        std::string gold_num;
        std::string eu_mask_num;

    public:

        std::string get_pi();
        std::string get_eu();
        std::string get_tau();
        std::string get_gold();
        std::string get_eu_mask();

    };


}







