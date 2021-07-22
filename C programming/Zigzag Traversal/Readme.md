## Zig Zag Traversal
Your task is to write a program to print the zigzag level-order traversal of a binary tree.
Here are a few examples :
```
  1
 / \
2   3
Traversal : 1 3 2
```
```
    1
   / \
  2   3
 / \   \
4   5   6
Traversal : 1 3 2 4 5 6
```
```
       1
      / \
     2   3
    / \   \
   4   5   6
  /   /   / \
 7    8  9   10
 Traversal : 1 3 2 4 5 6 10 9 8 7
 ```
__Input Format:__

1. First line contains the number of nodes N.
2. Next N-1 lines contains information about one edge each.
3. Each line consists of three values : U V C which denotes that V is a child of U
4. If C is 'L' then V is a left child and if C is 'R' then V is a right child2. 

__Output Format:__ 

Print the zigzag level order traversal as explained.

__Sample Input__

```
3
1 2 L
1 3 R
```
__Sample Output__
```
1 3 2
```
