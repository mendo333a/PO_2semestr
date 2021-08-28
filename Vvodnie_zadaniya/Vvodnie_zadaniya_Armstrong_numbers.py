print("This is the program to generate Armstrong Numbers in range from 1 to 32000")
for chislo in range(0,32001): 
    a = chislo //10000
    b= (chislo%10000)//1000
    c = (chislo%1000)//100
    d = (chislo%100)//10
    f = chislo%10
    if (a==0 and b==0 and c==0 and d==0 and f>0 and (f**1) == chislo):
        print("Armstrong Numbers {}".format(chislo))
    if (a==0 and b==0 and c==0 and d>0 and ((d**2) + (f**2) == chislo)):
        print("Armstrong Numbers {}".format(chislo))
    if (a==0 and b==0 and c>0 and ((c**3) + (d**3) + (f**3) == chislo)):
        print("Armstrong Numbers {}".format(chislo))    
    if (a==0 and b>0 and ((b**4) + (c**4) + (d**4) + (f**4) == chislo)):
        print("Armstrong Numbers {}".format(chislo))    
    if (a>0 and ((a**5) + (b**5) + (c**5) + (d**5) + (f**5) == chislo)):
        print("Armstrong Numbers {}".format(chislo))
