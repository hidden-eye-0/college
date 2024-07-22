amt = int(input("Enter the amount: "))
cost = int(input("Enter the cost of one coffee: "))
free = int(input("Enter the number of cups he need to buy to get a free coffee: "))
extra = int(input("Enter the number of free cups to get an extra coffee: "))
nof = (amt/cost)/free
extra_free = nof/extra
result = (amt/cost) + nof + extra_free

print("Number of coffees he'll get = {}".format(result))