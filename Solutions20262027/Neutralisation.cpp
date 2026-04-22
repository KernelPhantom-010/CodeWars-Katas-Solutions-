#include <string.h>
#include <string>
#include <iostream>
std::string neutralise(const std::string& s1, const std::string& s2)
{
    /*
    Codewars Description: https://www.codewars.com/kata/65128732b5aff40032a3d8f0
    ("+-+", "+--") ➞ "+-0"
    # Compare the first characters of each string, then the next in turn.
    # "+" against a "+" returns another "+".
    # "-" against a "-" returns another "-".
    # "+" against a "-" returns "0".
    # Return the string of characters.
    
    */

    std::cout << "[+] Solution for Codewars - 'Neutralisation' [+]\n";

    std::string resultingString;
    if (s1.size() != s2.size()) //using size, because of the const std::string
    {
        std::cout << "[+] Strings need to have the same length ! [+]";
        return 0;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '+' && s2[i] == '+') resultingString += "+";
        if (s1[i] == '-' && s2[i] == '-') resultingString += "-";
        if (s1[i] == '+' && s2[i] == '-' || s1[i] == '-' && s2[i] == '+') resultingString += "0";
    }
  return resultingString;
}
