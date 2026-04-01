# Competitive Programming

Personal workspace for practicing data structures, algorithms, and contest problems.

## Goals

- Solve problems consistently.
- Build a reusable library of templates.
- Track progress and weak topics.
- Improve speed and accuracy under contest constraints.

## Suggested Structure

You can organize the repository like this:

```text
competitive-programming/
	README.md
	templates/
		cpp/
		python/
	platforms/
		codeforces/
		leetcode/
		atcoder/
	topics/
		graphs/
		dp/
		strings/
	notes/
```

## Language Setup

### C++ (G++)

Compile:

```bash
g++ -std=c++17 -O2 -Wall -Wextra -o main solution.cpp
```

Run:

```bash
./main < input.txt
```

### Python

Run:

```bash
python3 solution.py < input.txt
```

## Workflow

1. Pick a problem.
2. Write a brute-force approach first.
3. Optimize to pass constraints.
4. Save final solution with problem link and notes.
5. Revisit hard problems after a few days.

## Solution File Header (Recommended)

Add this at the top of each solution file as comments:

```text
Problem:
Platform:
Difficulty:
Key idea:
Time complexity:
Space complexity:
```

## Progress Tracker

| Date | Platform | Problem | Topic | Difficulty | Status |
|------|----------|---------|-------|------------|--------|
|      |          |         |       |            |        |

## Topic Checklist

- [ ] Arrays and Prefix Sums
- [ ] Two Pointers
- [ ] Binary Search
- [ ] Sliding Window
- [ ] Stack and Queue
- [ ] Linked List
- [ ] Trees and BST
- [ ] Graph Traversal (BFS/DFS)
- [ ] Shortest Path
- [ ] Dynamic Programming
- [ ] Greedy
- [ ] Bit Manipulation
- [ ] Strings

## Notes

- Keep solutions minimal and readable.
- Prefer iterative improvements over perfect first attempts.
- Maintain a short note for each mistake pattern.
