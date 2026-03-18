<h1 align="center"> Competitive Programming — Algorithms & Problem Solving</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Author-Azer%20Aslanov-blueviolet?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Topic-Competitive%20Programming-000000?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Languages-C++%20%7C%20%20%7C%20-informational?style=for-the-badge" />
  <img src="https://img.shields.io/badge/License-MIT-green?style=for-the-badge" />
</p>

<p align="center">
  <b>A performance algorithmic training project for mastering competitive programming.</b><br>
</p>

---

##  Animated Preview (GIF FOR FUN)
<p align="center">
  <img src="https://media.giphy.com/media/xThuWcaaRBVx9qfUuk/giphy.gif" width="80%" />
</p>

---

##  What This Project Includes

-  **Fast implementations** of common algorithms  
-  **Olympiad-level problems** rewritten with clarity  
-  **Algorithm explanations** (DP, Graphs, Greedy, BS, Math)  
-  **Optimized templates** for competitive programming  
-  **No unnecessary files** — clean and direct  
-  **Example solutions** for multiple difficulty tiers  
-  **Made for students preparing for ICPC / IOI / AzerCell Olympiad**

---

##  Algorithms Covered

###  **Data Structures**
- Arrays, Hash Maps, Prefix Sums  
- Binary Search Trees  
- Segment Trees  
- Fenwick Tree (Binary Indexed Tree)  
- Priority Queues / Heaps  

###  **Search & Optimization**
- Binary Search (Classic, Parametric, Advanced)  
- Ternary Search  
- Backtracking  

###  **Graphs**
- BFS / DFS  
- Dijkstra  
- Bellman-Ford  
- Floyd–Warshall  
- MST: Kruskal & Prim  
- Topological Sorting  

###  **Dynamic Programming**
- Knapsack  
- DP on Trees  
- DP on Strings  
- Digit DP  
- Optimization Tricks (Convex Hull, Slope Trick)

###  **Math**
- Number Theory  
- Combinatorics  
- Modular Arithmetic  
- Matrix Exponentiation  

---

##  Example (Binary Search Template)

```cpp
// Binary Search Template (Fast) — For CP
// Author: Azer Aslanov

int l = 0, r = n - 1;
while (l <= r) {
    int mid = (l + r) / 2;
    if (a[mid] == target) {
        return mid;
    } else if (a[mid] < target) {
        l = mid + 1;
    } else {
        r = mid - 1;
    }
}
return -1;
```

---

##  Example (Dynamic Programming — Simple)

```python
# Classic DP: Fibonacci (O(n)) — CP Friendly
# Author: Azer Aslanov

n = int(input())
dp = [0, 1] + [0] * (n - 1)

for i in range(2, n + 1):
    dp[i] = dp[i - 1] + dp[i - 2]

print(dp[n])
```

---

##  Project Purpose

This project is designed for:

-  **Students** preparing for regional and international olympiads  
-  **Competitors** wanting clean, reusable algorithm templates  
-  **Beginners → advanced learners** who need structured algorithm knowledge  
-  **Science & Genius** followers who love powerful logic topics  

The goal is to provide a **realistic training ground** for high-level contests with beautifully formatted examples.

---

##  Quick Start

No installation needed — just open any file to study the algorithm or run the code directly.

Recommended setup:
- **C++ (GNU g++ 17+)**
- **Python 3.10+**
- **VS Code** + CP extensions

---

##  Contributing

Have a faster implementation?  
Found an algorithm I should add?  

Pull requests are welcome!!

---

##  Support the Project

If this helps you become a stronger contestant,  
please **star the repository** 

---

##  Connect With Me

<p align="left">
  <a href="https://github.com/AzerAslanov">
    <img src="https://img.shields.io/badge/GitHub-AzerAslanov-000000?style=for-the-badge&logo=github" />
  </a>
</p>
