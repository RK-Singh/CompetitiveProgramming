#!/usr/bin/py
#https://www.hackerrank.com/challenges/sherlock-and-watson

from collections import deque
n,k,q = map(int, raw_input().strip().split(' '))
a = map(int, raw_input().strip().split(' '))
for i in a:
    assert 1 <= i <= 10**5

a = deque(a)
a.rotate(k)
len_a = len(a)
for i in range(q):
    query = input()
    print a[query]

