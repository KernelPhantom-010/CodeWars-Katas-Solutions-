#include <string>
#include <vector> 
#include <iostream>
#include <algorithm>
#include <cmath>
/*
Link: https://www.codewars.com/kata/5a54e796b3bfa8932c0000ed
Definition
Jumping number is a number such that all adjacent digits in it differ by 1.

Task
Given a number, return "Jumping!!" if it is a jumping number, otherwise return "Not!!".

*/
std::string jumpingNumber (int number)
{
  std::string checkVal;
  if (number < 10) {return "Jumping!!";}
  int prev = number % 10;
  number /= 10;
  while (number > 0)
    {
    int currentNumber = number % 10;
    if (std::abs(currentNumber - prev) != 1)
      {
      return "Not!!";
    }
    number /= 10;
    prev = currentNumber;
  }
  return "Jumping!!";
}
