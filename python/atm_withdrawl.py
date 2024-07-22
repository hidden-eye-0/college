bal = int(input("Enter your balance amount:"))
amt = int(input("Enter the amount to be withdrawn:"))
pin = int(input("Enter your pin:"))

if(pin!=1234):
    print("Wrong pin!")
elif(amt>bal):
    print("Insufficient balance to withdraw!")
elif(amt%5!=0):
    print("Cannot withdraw the amount, please enter it in multiples of 5!")
else:
    print("Amount withdrawed: {}".format(amt))
    print("Balance          : {}".format(bal-amt))