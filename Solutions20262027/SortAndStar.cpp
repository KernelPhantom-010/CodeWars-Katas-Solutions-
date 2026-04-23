#include <vector>
#include <string>
#include <algorithm>
std::string twoSort(std::vector<std::string> s)
{
  /*
Title: Sort and Star
CodeWars Link: https://www.codewars.com/kata/57cfdf34902f6ba3d300001e/cpp 

Description:

You will be given a list of strings. You must sort it alphabetically (case-sensitive, and based on the ASCII values of the chars) and then return the first value.
The returned value must be a string, and have "***" between each of its letters.
You should not remove or add elements from/to the array.
  
----------------------------------------------------------------------------  
  */
    std::vector<std::string> sortedList = s;
  int size = 4;
  std::sort(sortedList.begin(), sortedList.end());
  std::string firstValue;
  for (int x = 0; x < sortedList[0].size() -1; x++)
    {
    std::string toAppend = std::string(1, sortedList[0][x]) + "***";
    firstValue.append(toAppend);
  }
  
  //String[String.length() - 1];
  char lastChar = sortedList[0][sortedList[0].length() -1];
  firstValue += lastChar;
    return firstValue;
}
