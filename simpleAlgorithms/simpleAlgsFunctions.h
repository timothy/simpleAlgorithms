#pragma once
#include <vector>

/**
* \brief Reverse a string Function
* \param str The string you would like to have reversed
* \return The reverse string of str
*/
std::string reverse(std::string str);

/**
 * \brief this will return the reverse of the integer number you give it
 * \param num a number you would like to have reversed
 * \return the revers of the int you passed into the parameters
 */
int reverse(int num);

/**
 * \brief this will compute the factorial of an integer number
 * \param num a number you would like a factorial of
 * \return the factorial of the number in param
 */
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

/**
 * \brief this will check the status if a word or phrase to see if it is a palindrome.
 * \param str The string you would like to know the palindrome status of
 * \return true if palindrome
 */
bool palindrome(std::string str);

/**
 * \brief this will break a string into substrings using a char separator
 * \param str a string that will be separated into substring with each substring placed into a vector
 * \param spltr the char that you would like your string to be separated by
 * \return a vector of strings
 */

std::vector<std::string> splitString(std::string str, char spltr);
/**
* \brief this will break a string into substrings using a string separator
* \param str a string that will be separated into substring with each substring placed into a vector
* \param spltr the substring that you would like your string to be separated by
* \return a vector of strings
*/
std::vector<std::string> splitString(std::string str, std::string spltr);

/**
 * \brief this will find the length of the larges word in a string
 * \param str a string of words
 * \return the integer value of the largest word in the string
 */
int longestWord(std::string str);


/**
 * \brief this will capitalize the first letter of every word in a string
 * \param str A string that you would like all the words first letters capitalized
 * \return a string with every words first letter capitalized
 */
std::string capEachWrd(std::string str);