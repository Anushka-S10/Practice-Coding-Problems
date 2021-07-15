## Looped List
You are not allowed to make any changes to the code other than the find_loop function body.

In the function, you will be given a head node to a linked list.

Two types of linked lists are :
Terminating Lists :
```
1 -> 2 -> 7 -> 8 -> 9 -> NULL
```
Non-Terminating Lists(Loop in the list) :
```
1 -> 2 -> 5 -> 15 -> 7--------
	 ^	 	     |
	 |                   |
	 ---- 3 <- 10 <- 9<--
```
In the second type of list, you can traverse forever and never reach the end.

Modify the find_loop function so that given the head of the linked list, it returns 1 if the list has a loop and 0 otherwise.

Your code's memory consumption must not be dependant on the size of the linked list.

__Input Format:__

Not Needed

__Output Format:__ 

Not Needed
