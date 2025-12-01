You are given two arrays of length n
: a1,a2,…,an
 and b1,b2,…,bn
.

You can perform the following operation any number of times:

Choose integer index i
 (1≤i≤n
);
Swap ai
 and bi
.
What is the minimum possible sum |a1−a2|+|a2−a3|+⋯+|an−1−an|
 +
 |b1−b2|+|b2−b3|+⋯+|bn−1−bn|
 (in other words, ∑i=1n−1(|ai−ai+1|+|bi−bi+1|)
) you can achieve after performing several (possibly, zero) operations?

Input
The first line contains a single integer t
 (1≤t≤4000
) — the number of test cases. Then, t
 test cases follow.

The first line of each test case contains the single integer n
 (2≤n≤25
) — the length of arrays a
 and b
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the array a
.

The third line of each test case contains n
 integers b1,b2,…,bn
 (1≤bi≤109
) — the array b
.

Output
For each test case, print one integer — the minimum possible sum ∑i=1n−1(|ai−ai+1|+|bi−bi+1|)
.
