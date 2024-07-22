fg = input("Are you a first graduate(y/n)?: ")
if(fg=='y'):
    phy = int(input("Enter your physics marks: "))
    che = int(input("Enter your chemistry marks: "))
    mat = int(input("Enter your maths marks: "))

    avg = (phy+che+mat)/3

    if(avg>97):
        print("You are eligible for scholarship")
    else:
        print("You are not eligible for scholarship")
else:
    print("You are not eligible for scholarship")