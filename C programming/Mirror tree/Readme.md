## Mirror Tree
When a tree is reflected across an imaginary straight vertical line right or left of the entire tree, the resultant tree hence obtained is the mirror tree of the original tree.

Your task is to write a program to check if two given trees are mirrors of each other.

__Input Format:__

1. First line consists of the number of nodes N.
2. Next N-1 lines each describes the first tree. Each line has two integers U and V and a letter 'R' or 'L', denoting that V is the left or the right child of U.
3. Next N-1 lines each describes the second tree. Each line has two integers U and V and a letter 'R' or 'L', denoting that V is the left or the right child of U.

__Output Format:__ 

Print "yes" if the two trees are mirrors of each other and "no" otherwise.

__Sample Input__

```
3
1 2 R
1 3 L
1 2 L
1 3 R
```

__Sample Output__

yes

__Explanation__

The first tree is
```
  1 

 / \ 

3   2
```
The second tree is
```
  1 

 / \ 

2   3
```
Clearly, both the trees are mirrors of each other.
