#include "../headers/constants.h"

std::string alt::constants::get_pi()
{
    pi_file.open("..//docs//constants//pi.txt", std::ios::in);
    if(pi_file.is_open())
        while(std::getline(pi_file, pi_num));
    else
        std::cerr << "error";

    return pi_num;
}

std::string alt::constants::get_eu()
{
    this->eu_file.open("..//docs//constants//euler.txt", std::ios::in);
    if(eu_file.is_open())
        while(std::getline(eu_file, eu_num));
    else
        std::cerr << "error";

    return this->eu_num;
}

std::string alt::constants::get_tau()
{
    this->tau_file.open("..//docs//constants//tau.txt", std::ios::in);
    if(tau_file.is_open())
        while(std::getline(tau_file, tau_num));
    else
        std::cerr << "error";

    return this->tau_num;
}

std::string alt::constants::get_gold()
{
    this->gold_file.open("..//docs//constants//gold.txt", std::ios::in);
    if(gold_file.is_open())
        while(std::getline(gold_file, gold_num));
    else
        std::cerr << "error";

    return this->gold_num;
}

std::string alt::constants::get_eu_mask()
{
    this->eu_mask_file.open("..//docs//constants//euler-mask.txt", std::ios::in);
    if(eu_mask_file.is_open())
        while(std::getline(eu_mask_file, eu_mask_num));
    else
        std::cerr << "error";

    return this->eu_mask_num;
}
