##  Barua and his Rank Reversal
You've been given a permutation of containing N distinct elements between 1 and N, both included. (1<=N<=10^3)
The rank of an element in this array is the number of elements to it's left which are strictly lesser than it.
You have been given array,formulate it's rank array.
Seems tough right? Let's make the question a bit simpler :P

Instead of the actual array, you would be given a rank array. Formulate the initial array from it. It is guaranteed that the solution would be unique.

__Input Format:__

1. In the first line input N(1<=N<=10^3)
2. In the next line input rank array 0<=Rank[i]

__Output Format:__ 

Print the N integers of the actual array.

NOTE : All elements in the rank array may or may not be distinct.

__Sample Input__

```
3
0 1 2
```
__Sample Output__
```
1 2 3
```
__Explanation__

- If the actual array is : 1 2 3
- Rank array will be : 0 1 2 Thus it satisfies the provided input.
- Because there are 0 elements to the left of 1 which are lesser than 1, 1 element to the left of 2 which is lesser than 2 and 2 elements to the left of 3 which are lesser than 3.
