## Min Product Array 1
You are given a task to find the sum of Products of corresponding elements of two arrays of the same size.
Given that k modifications are allowed on the first array, what is the minimum product that can be obtained?
In each modification, one array element of the first array can either be increased or decreased by 2.

Note- the product sum is Summation (A[i]*B[i]) for all i from 1 to n where n is the size of both arrays

*Hint : *
You should try to use all the k operations on any single element of the modifiable array a.

__Input Format:__

1. First line of the input contains n and k delimited by whitespace
2. Second line contains the Array A (modifiable array) with its values delimited by spaces
3. Third line contains the Array B (non-modifiable array) with its values delimited by spaces.

__Constraints:__ 

- 1 ≤ N ≤ 10^5
- 0 ≤ |A[i]|, |B[i]| ≤ 10^5
- 0 ≤ K ≤ 10^9

__Output Format:__ 

Output the minimum sum of products of the two arrays.

__Sample Input__

3 5

1 2 -3

-2 3 -5

__Sample Output__

-31

__Sample Input__

5 3

2 3 4 5 4

3 4 2 3 2

__Sample Output__

25
