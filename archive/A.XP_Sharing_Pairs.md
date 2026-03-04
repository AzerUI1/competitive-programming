#                                                                                       XP Sharing Pairs

## Problem Statement

In a round of a game, players contribute XP to a shared pool. XP can be shared between partners in pairs. However, some XP contributions may **not form proper pairs** — these are considered *“lies”* and do not count.

You are given an array of integers representing the XP contributed by each player. A **real XP-sharing pair** consists of **two identical XP values**. Your task is to count the **maximum number of real XP-sharing pairs** that can be formed in this round.

---

## Input

A single line containing space-separated integers:  

```

xp_1 xp_2 ... xp_n

```

Where:  

- \(1 \le xp_i \le 10^9\) — the XP contributed by each player.  

---

## Output

Print a single integer — the number of **real XP-sharing pairs** in the round.

---

## Constraints

- Each XP can be used in **at most one pair**.  
- “Lies” (unpaired XP contributions) are ignored.  
- The goal is to **maximize the number of real XP-sharing pairs**.  

---

## Example 1

**Input:**  
```

1 1 6 8 6 8 7 9 0

```

**Output:**  
```

3

```

**Explanation:**  

- Real pairs: (1,1), (6,6), (8,8) → 3 real pairs.  
- Remaining XP contributions 7, 9, 0 are “lies” and do not count.  

---

## Example 2

**Input:**  
```

2 2 2 3 3 4

```

**Output:**  
```

2

```

**Explanation:**  

- Real pairs: (2,2), (3,3) → 2 real pairs.  
- Remaining 2 and 4 are “lies” and do not count.  

