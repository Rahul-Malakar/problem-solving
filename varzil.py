lowerlimit = int(input("enter lower range"))
upperlimit = int(input("enter upper range"))
for j in range(lowerlimit,upperlimit+1):
    for i in range(1, 11):
        print(j, 'x', i, '=', j*i)
