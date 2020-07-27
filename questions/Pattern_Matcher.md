## Pattern Matcher

#### Problem Statement


You are given two non-empty strings. The rst one is a pattern consisting of only "x"s and / or "y"s; the other one is a normal string of alphanumeric characters. Write a function that checks whether or not the normal string matches the pattern. A string S0 is said to match a pattern if replacing all"x"s in the pattern with
some string S1 and replacing all"y"s in the pattern with some string S2 yields the same string S0. If the input string does not match the input pattern, return an
empty array; otherwise, return an array holding the representations of"x" and "y"in the normal string, in that order. If the pattern does not contain any "x"s or
"y"s, the respective letter should be represented by an empty string in the nal array that you return. Assume that there will never be more than one pair of
strings S1 and S2 that appropriately represent"x" and "y"in the input string.

Sample input:"xxyxxy","gogopowerrangergogopowerranger"

Sample output: ["go","powerranger"]



#### Explanation

We can use a Stack here


#### Solution

Check this [Python](../python/Pattern_Matcher.py) code.

