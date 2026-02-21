import random
import time

print("Hello, This is Game About Finding Number!")
print("Start the Game, Good luck.\n")

attempt = 5

random.seed(int(time.time()))
find = random.randint(0, 100)

while attempt > 0:
    print("Attempts left:", attempt)
    n = int(input("Enter your number: "))

    if n == find:
        print("\nGood Game, You Win.")
        break
    elif n > find:
        print("Try Smaller Number!\n")
    else:
        print("Try Bigger Number!\n")

    attempt -= 1
else:
    print("\nUnfortunately, You Lost!")
    print("Your Number Was:", find)
