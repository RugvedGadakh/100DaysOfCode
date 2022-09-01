print("Welcome to the yip calulator.")
total_bill = input("What was the total bill? $")
tip = input("What percent tip would like to give ? 10,12 or 15? ")
n = input("in how many people to split the bill? ")
total = (float(total_bill) + ((float(total_bill)*float(tip))/100))


result = (float(total)/ int(n))
final_amt_per_person =round(result , 2)
print(final_amt_per_person)