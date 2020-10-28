A1 = float(input("введіть значення A1: "))
B1 = float(input("введіть значення B1: "))
C1 = float(input("введіть значення C1: "))
A2 = float(input("введіть значення A2: "))
B2 = float(input("введіть значення B2: "))
C2 = float(input("введіть значення C2: "))
A = A1/A2
B = B1/B2
C = C1/C2
if A != B:
    print("Рівняння має 1 корінь")
else:
    if A != C:
        print("Рівняння коренів не має")
    else:
        print("Рівняння має безліч коренів")
