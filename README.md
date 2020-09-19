# Cracking Notes :)

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
It's a parallel concep to time complexity. If we need to create an array of size _n_, this will require O(n) space. If it is a two dimensional array _nxn_, we'll have O(n²) space. 
Stack space in recursive calls counts, too.

#### Drop the Constants and Non-Dominant Terms
Big O just describes the rate of increase. For this reason, we drop the constants in runtime. An algorithm that one might have described as _O(2n)_ is actually _O(n)_.
We also drop the non-dominant terms. 
- O(n² + n) --> O(n²)
- O(n + logn) --> O(n)
- O(5*2^n +1000n) --> O(2^n)

#### Multi-Part Algorithms: ADD vs MULTIPLY

Ex 1 --> Add the runtimes O(A+B)
We do A chunks of work, _then_ B chunks of work. 
> Do this, then, when you're all done, do that.
```
for (int a: arrA) {
  print(a);
}
for (int b: arrB) {
  printf(b);
}
```
Ex 2 --> Multiply the runtimes O(A*B)
We do B chunks of work,for each element in A. 
> Do this for each time you do that.
```
for (int a: arrA){
  for (int b: arrB){
    print (a + "," + b);
  }
}
```

#### Amortized Time
Let's see an example.
An ```ÀrrayList```, or _dynamically resizing_ array offers you flexibility in size. You won't run out of space, since it's capacity will grow as you insert elements.
When the array hits capacity, the ```ÀrrayList``` class will create a new array with _double_ the capacity and copy all the element over to he new array. How do we describe the runtime of insertion?
If it contains N elements, then inserting a new element will take O(N) time. You will have to create a new array of size 2N and the copy N elements over.
However, this doesn't happen very often. The majority of the time insertion will be O(1) time.
Amortized time takes both into account. The worst case happens every once in a while, and, once it happens, it won't happen again for so long that the cost is "amortized".
In this case, as we insert elements, we double the capacity when the size of the array is a power of 2.
So, X + X/2 + X/4 ... + 1 --> this is roughly 2X.
Therefore, X insertions take O(2X) time. The amortized time for each insertion is O(1).


#### Log N Runtimes
Let's check another example, the binary search.
We first compare the element we are looking for to the midpoint of the array. If ```x == middle```, the we return. If ```x < middle```, then we search on the left side of the array. If ```x > middle```, then we search on the right side of the array.
We start with a N-element array to search. Then, we are down to N/2 elements. One more step, and it is N/4 elements.
The total runtime is then a matter of how many steps (dividin N by 2 each time) we can take until becomes 1.

ex:
2^k = N --> logN = k.

When we see a problem where the number of elements in the problem space gets halved each time, that will likely be a O(log n) runtime. We cut the problem space in half each time. (The base of the log doesn't matter for the purposes of big O).


#### Recursive Runtimes
When you have a recursive function that makes multiple calls, the runtime will often look like _O(brances^depth)_. Branches is the number of times each recursive call branches. The base of an exponent does matter!!!!
Example:
```
int f (int n) {
  if (n <= 1) {
    return 1;
  }
  return f(n - 1) + f(n - 1);
}
```
Although we have O(2^n) nodes in the tree total, only O(n) exist at any given time. Therefore, we would only need to have O(n) memory available.

## Arrays 
Data structure that can be selected by indices computed at run-time. 



