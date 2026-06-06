/*
Link: https://www.codewars.com/kata/5d72704499ee62001a7068c7/python
Definition
Some integral numbers are odd. All are more odd, or less odd, than others.

Even numbers satisfy n = 2m ( with m also integral ) and we will ( completely arbitrarily ) think of odd numbers as n = 2m + 1.
Now, some odd numbers can be more odd than others: when for some n, m is more odd than for another's. Recursively. :]
Even numbers are always less odd than odd numbers, but they also can be more, or less, odd than other even numbers, by the same mechanism.

Task
Given a non-empty finite list of unique integral ( not necessarily non-negative ) numbers, determine the number that is odder than the rest.
Given the constraints, there will always be exactly one such number.


Solution: 
*/

def oddest(a):
    def odd_score(n):
        score = []
        while n != 0:
            score.append(n % 2)
            n //= 2
        return score
    
    return max(a, key=odd_score)

#WARNING: May not work perfectly because the Discription is way to unclear (I'm not alone on this one, based on the comments related to this Kata)
