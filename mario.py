import cs50

while True:
    num = cs50.get_int('\nDigite um numero e forme meia piramide: ')
    if num <= 0 or num > 8:
        print('\nDigite entre 1 e 8!')
        continue
    else:
        break
for i in range(num):
    print(" " * (num - i - 1), end="")
    print('#' * (i + 1))