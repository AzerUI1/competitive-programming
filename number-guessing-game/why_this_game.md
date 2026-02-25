# Number Guessing Game (Binary Search Based)

This game is not just a simple number guessing game. If you understand computer programming, you’ll realize that it is actually based on the **binary search algorithm**.

Instead of guessing randomly, the game narrows down the possible numbers by repeatedly dividing the range in half. This makes the process much faster and more efficient.

## How It Works

- The game starts with a defined range of numbers.
- It always checks the middle number of the current range.
- If the target number is smaller, it searches the left half.
- If the target number is larger, it searches the right half.
- This process repeats until the correct number is found.

## Why It Is Efficient

Binary search reduces the search space by half each time, resulting in a time complexity of **O(log n)**, which is much faster than linear searching for large ranges.
