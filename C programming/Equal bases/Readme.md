## Equal Bases
Given a decimal number N, you need to find the number of bases 1 < b <= n such that when the number N is represented in base 'b', it ends in a zero.

__Input Format__

Input contains only one number, N.

__Constraints__

1 <= N <= 10000

__Output Format__
Output one number, the number of bases b such that when number N is represented in base b, the number contains a trailing zero.

__Sample Input__

12

__Sample Output__

5

__Explanation__
__Base : Number :__
2 &nbsp; 1100

3 &nbsp; 110

4 &nbsp; 30

5 &nbsp; 22

6 &nbsp; 20

7 &nbsp; 15

8 &nbsp; 14

9 &nbsp; 13

10 &nbsp; 12

11 &nbsp; 11

12 &nbsp; 10

12 ends with a zero in 5 different number systems - 2,3,4,6 and 12. Hence the answer is 12.