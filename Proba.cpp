n = int(input())
pri = ""
bol = False
for i in range(0, n):
    string = input()
    for i1 in string:
        if i1 == ',' or i1 == '.' or i1 == '_':
            bol = True
            pri = f"{string} is not pure!"
    if bol:
        print(pri)
    else:
        print(f"{string} is pure.")


