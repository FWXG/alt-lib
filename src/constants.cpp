#include "../headers/constants.h"

std::string alt::constants::pi_num      = "";
std::string alt::constants::eu_num      = "";
std::string alt::constants::tau_num     = "";
std::string alt::constants::gold_num    = "";
std::string alt::constants::eu_mask_num = "";

std::string alt::constants::get_pi()
{
    std::fstream pi_file("..//docs//constants//pi.txt", std::ios::in);
    if(pi_file.is_open())
        while(std::getline(pi_file, pi_num));
    else
        std::cerr << "error";

    pi_file.close();
    return pi_num;
}

std::string alt::constants::get_eu()
{
    std::fstream eu_file("..//docs//constants//euler.txt", std::ios::in);
    if(eu_file.is_open())
        while(std::getline(eu_file, eu_num));
    else
        std::cerr << "error";

    eu_file.close();
    return eu_num;
}

std::string alt::constants::get_tau()
{
    std::fstream tau_file("..//docs//constants//tau.txt", std::ios::in);
    if(tau_file.is_open())
        while(std::getline(tau_file, tau_num));
    else
        std::cerr << "error";

    tau_file.close();
    return tau_num;
}

std::string alt::constants::get_gold()
{
    std::fstream gold_file("..//docs//constants//gold.txt", std::ios::in);
    if(gold_file.is_open())
        while(std::getline(gold_file, gold_num));
    else
        std::cerr << "error";

    gold_file.close();
    return gold_num;
}

std::string alt::constants::get_eu_mask()
{
    std::fstream eu_mask_file("..//docs//constants//euler-mask.txt", std::ios::in);
    if(eu_mask_file.is_open())
        while(std::getline(eu_mask_file, eu_mask_num));
    else
        std::cerr << "error";

    eu_mask_file.close();
    return eu_mask_num;
}
