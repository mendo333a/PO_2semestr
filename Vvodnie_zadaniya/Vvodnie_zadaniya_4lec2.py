print("This is the program to calculate the percentage content of symbols G (guanine) and C (cytosine)")
stroka =  input("Enter the string:  ")
stroka_g = stroka.upper().count('g'.upper())
stroka_c = stroka.upper().count('c'.upper())
summa_gc = stroka_g + stroka_c
print(summa_gc/len(stroka)*100)
