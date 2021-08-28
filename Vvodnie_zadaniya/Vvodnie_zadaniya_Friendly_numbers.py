print("This is the program to find Friendly Numbers in range from 1 to 10000")
for chislo1 in range(1,10001):
    chislo2 = 0
    for i in range(1, chislo1):
        if chislo1 % i == 0:
            chislo2 += i
    if chislo2 > chislo1:
        result = 0
        for i in range(1, chislo2):
            if chislo2 % i == 0:
                result += i
        if result == chislo1:
            print(chislo1, chislo2)