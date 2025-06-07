# 🎯 Find a Pair with a Given Sum in C

This repository contains two C programs that solve the classic **array-based problem**:  
> “Given an array of integers, find all pairs of elements whose sum equals a given target.”

These solutions showcase both **brute-force** and **optimized approaches**, demonstrating my understanding of algorithmic thinking, time complexity trade-offs, and efficient problem-solving.

---
## 🔍 Problem Statement

> Given an integer array and a target sum, print all unique pairs that add up to the target.

---

## 💡 Programs Included

### 1️⃣ `bruteForce.c`

- **Approach:** Simple nested loop (O(n²))
- **Logic:** Compare each pair of elements and print if their sum equals the target.
- **When to Use:** For small datasets or when clarity is more important than performance.


### 2️⃣ `sortingMethod.c`

- **Approach:** Sorting + Two Pointer technique (O(n log n))

- **Logic:** Sort the array, then use two pointers from both ends to efficiently find the target sum.

- **When to Use:** For larger datasets or when performance is a concern.