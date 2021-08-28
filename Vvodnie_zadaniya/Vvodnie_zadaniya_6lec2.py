print("This is the program to calculate the max summu results of throws for sportsmеn")

n_sportsmens = 0
res_broscov = 0
n, m = map(int, input("Input number of sportmen and number of throws through a space: ").split())

print ("Enter the results of the throws for each sportsman (the results are entered in a line separated by a space).")
for i in range(n):
    print ("Sportsman numbered", i+1, ":")
    res = map(int, input().split())
    res = list(res)
    summa = sum(res)
    if summa > res_broscov:
        res_broscov = summa
        n_sportsmens = i
print("Maximum points", res_broscov, "got the sportsman numbered", n_sportsmens+1)
