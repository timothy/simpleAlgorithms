#pragma once
#include <string>
#include <vector>

/**
* \brief Reverse a string Function
* \param str The string you would like to have reversed
* \return The reverse string of str
*/
std::string reverse(std::string str);
int reverse(int num);

int factorialize(int num);
/**
 * \brief generates a vector full of integers
 * \param howMany this indicates how many integers you want in your vector
 * \return a list of random integers inside of a vector
 */
std::vector<int> dataGen(int howMany);

/**
* \brief generates a vector full of integers
* \return a list of 35 random integers inside of a vector
*/
std::vector<int> dataGen();
/**
 * \brief generates a vector full of integers
 * \param howMany how many vector position you would like to fill with ints
 * \param range the range you would like the random numbers to fall within
 * \return a list of random integers inside of a vector
 */
std::vector<int> dataGen(int howMany, int range);

/**
 * \brief generates a vector full of integers with the option to be sorted
 * \param howMany howMany how many vector position you would like to fill with ints
 * \param range range the range you would like the random numbers to fall within
 * \param shouldSort true if you want the vector to be sorted
 * \return 
 */
std::vector<int> dataGen(int howMany, int range, bool shouldSort);
bool palindrome(std::string str);