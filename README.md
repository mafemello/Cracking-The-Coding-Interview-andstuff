# Cracking-The-Code-andstuff

## Chapter VI - BIG O
Big O is the language and metric we use to describe the efficiency of algorithms. 
- Big O: describes an **upper bound** on time. You can describe an algorithms as O(n²). That means it is at least as fast as O(n²); upper bound on the runtime. Similar to _less than or equal to_.

- Big Omega: equivalent concept but for **lower bound**. The algorithm _won't be faster_ than the settled runtime.

- Big Theta: theta means both O and Omega. Theta gives a tight bound on runtime. 

#### Best case, worst case and expected case
_What is the relationship between best/worst/expected case and big O/theta/omega?_
>> Best, worst and expected cases describe the big O (or theta) time for particular inputs or scenarios.
>> Big O, omega, and theta describe the upper, lower and tight bounds for the runtime.

#### Space Complexity
It's a parallel concep to time complexity. If we need to create an array of size __n__, this will require O(n) space. If it is a two dimensional array __nxn__, we'll have O(n²) space. 
Stack space in recursive calls counts, too.
