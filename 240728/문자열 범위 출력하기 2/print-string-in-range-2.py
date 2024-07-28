input_str = input()
n = int(input())
if n > len(input_str):
    print(input_str[::-1])
else:
    print(input_str[-n:][::-1])