n = int(input("Please enter a number between 10 and 100 : "))
while n < 10 or n > 100:
    n = int(input("Invalid input. Please enter a number between 10 and 100 : "))

fizz_count = 0
buzz_count = 0
fizzbuzz_count = 0

for i in range(1, n + 1):
    if i % 3 == 0 and i % 5 == 0:
        print("FizzBuzz")
        fizzbuzz_count += 1
    elif i % 3 == 0:
        print("Fizz")
        fizz_count += 1
    elif i % 5 == 0:
        print("Buzz")
        buzz_count += 1
    elif i % 7 == 0:
        print(i, "is skipped)")
        continue
    else:
        print(i)

print("--- Summary ---")
print("Fizz count :" ,fizz_count)
print("Buzz count :" ,buzz_count)
print("FizzBuzz count :" ,fizzbuzz_count)
