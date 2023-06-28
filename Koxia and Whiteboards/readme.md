Koxia and Whiteboards

https://codeforces.com/problemset/problem/1770/A

Kiyora has n
 whiteboards numbered from 1
 to n
. Initially, the i
-th whiteboard has the integer ai
 written on it.

Koxia performs m
 operations. The j
-th operation is to choose one of the whiteboards and change the integer written on it to bj
.

Find the maximum possible sum of integers written on the whiteboards after performing all m
 operations.

Input
Each test consists of multiple test cases. The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases. The description of test cases follows.

The first line of each test case contains two integers n
 and m
 (1≤n,m≤100
).

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
).

The third line of each test case contains m
 integers b1,b2,…,bm
 (1≤bi≤109
).

Output
For each test case, output a single integer — the maximum possible sum of integers written on whiteboards after performing all m
 operations.

Example
inputCopy
4
3 2
1 2 3
4 5
2 3
1 2
3 4 5
1 1
100
1
5 3
1 1 1 1 1
1000000000 1000000000 1000000000
outputCopy
12
9
1
3000000002
Note
In the first test case, Koxia can perform the operations as follows:

Choose the 1
-st whiteboard and rewrite the integer written on it to b1=4
.
Choose the 2
-nd whiteboard and rewrite to b2=5
.
After performing all operations, the numbers on the three whiteboards are 4
, 5
 and 3
 respectively, and their sum is 12
. It can be proven that this is the maximum possible sum achievable.

In the second test case, Koxia can perform the operations as follows:

Choose the 2
-nd whiteboard and rewrite to b1=3
.
Choose the 1
-st whiteboard and rewrite to b2=4
.
Choose the 2
-nd whiteboard and rewrite to b3=5
.
The sum is 4+5=9
. It can be proven that this is the maximum possible sum achievable.

