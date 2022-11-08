def membalikan(n):
    return n[::-1]
a,b = input().split()
a = membalikan (a)
b = membalikan (b)
c = str(int(a) + int(b))
print(int(membalikan(c)))