# cook your dish here
def kanu(string):
    if not string:
        return True
    if len(string) == 1:
        return True
    if len(string) % 2:
        return kanu(string[:-1])
    if string[:len(string) // 2] == string[len(string) // 2]:
        return kanu(string[:len(string) // 2])
        return False
    for _ in range(int(input())):
        abhi = int(input())
        abhi = input()
        if kanu(abhi):
            print("YES")
        else:
            print("NO")