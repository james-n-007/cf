## Find Loop

#### Problem Statement


Write a function that takes in the head of a Singly Linked List that contains a loop (in other words, the
list's tail node points to some node in the list instead of the None (null) value). The function should
return the node (the actual node - not just its value) from which the loop originates in constant space.
Note that every node in the Singly Linked List has a "value" property storing its value as well as a "next"
property pointing to the next node in the list.


Sample input:
n0 -> n1 -> n2 -> n3 -> n4 -> n5 -> n6
                        ^           v
                        n9 <- n8 <- n7
Sample output: n4


#### Explanation



#### Solution

Check this [Python](../python/Find_Loop.py) code.

