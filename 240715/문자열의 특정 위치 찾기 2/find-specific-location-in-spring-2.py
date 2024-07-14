str_arr = ["apple", "banana", "grape", "blueberry", "orange"]
str_input = input()
cnt = 0
for word in str_arr:
    if str_input == word[2] or str_input == word[3]:
        print(word)
        cnt += 1
print(cnt)