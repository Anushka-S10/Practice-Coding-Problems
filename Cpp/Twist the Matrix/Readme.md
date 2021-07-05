## Twist the Matrix
You are given a square matrix of dimension N. Let this matrix be called A.
Your task is to rotate A in clockwise direction byS degrees, where S is angle of rotation.
On the matrix, there will be 3 types of operations viz.

__Rotation__
Rotate the matrix A by angle S, presented as input in form of A S

__Querying__
Query the element at row K and column L, presented as input in form of Q K L

__Updation__
Update the element at row X and column Y with value Z, presented as input in form of U X Y Z

Print the output of individual operations as depicted in Output Specification

__Input Format:__

Input will consist of three parts, viz.
1. Size of the matrix (N)
2. The matrix itself (A = N * N)
3. Various operations on the matrix, one operation on each line. (Beginning either with A, Q or U)

-1 will represent end of input.

__Note:__

Angle of rotation will always be multiples of 90 degrees only.
All Update operations happen only on the initial matrix. After update all the previous rotations have to be applied on the updated matrix.

__Constraints:__ 

- 1<=N<=1000
- 1<=Aij<=1000
- 0<=S<=160000
- 1<=K, L<=N
- 1<=Q<=100000

__Output Format:__ 

For each Query operation print the element present at K-L location of the matrix in its current state.

__Sample Input__

2 

1 2

3 4

A 90

Q 1 1

Q 1 2

A 90

Q 1 1

U 1 1 6

Q 2 2

-1

__Sample Output__

3

1

4

6

__Explanation 0__

Initial Matrix
1 2
3 4

After 90 degree rotation, the matrix will become
3 1
4 2
Now the element at A11 is 3 and A12 is 1.

Again the angle of rotation is 90 degree, now after the rotation the matrix will become
4 3
2 1
Now the element at A11 is 4.

As the next operation is Update, update initial matrix i.e.
6 2
3 4

After updating, apply all the previous rotations (i.e. 180 = two 90 degree rotations).
The matrix will now become
4 3
2 6
Now A22 is 6.
