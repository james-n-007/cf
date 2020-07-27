## Topological Sort

#### Problem Statement


You are given a list of arbitrary jobs that need to be completed; these jobs are represented by integers. You are also
given a list of dependencies. A dependency is represented as a pair of jobs where the rst job is prerequisite of the
second one. In other words, the second job depends on the rst one; it can only be completed once the rst job is
completed. Write a function that takes in a list of jobs and a list of dependencies and returns a list containing a valid
order in which the given jobs can be completed. If no such order exists, the function should return an empty list.

`Sample input: [1, 2, 3, 4], [[1, 2], [1, 3], [3, 2], [4, 2], [4, 3]]
Sample output: [1, 4, 3, 2] or [4, 1, 3, 2]
`


#### Explanation



#### Solution

Check this [Python](../python/Topological_Sort.py) code.

