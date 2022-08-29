# 🚨 Don't change the code below 👇
height = float(input("enter your height in m: "))
weight = float(input("enter your weight in kg: "))
# 🚨 Don't change the code above 👆

#Write your code below this line 👇
BMI = weight/(height**2)
result = round(BMI)

if result<18.5 :
    print(f"Your BMI is {result}, you are underweight.")
elif result<25 and result>=18.5 :
    print(f"Your BMI is {result}, you have a normal weight.")
elif result<30 and result>=25 :
    print(f"Your BMI is {result}, you are slightly overweight.")
elif result<35 and result>=30 :
    print(f"Your BMI is {result}, you are obese.")
else:
    print(f"Your BMI is {result}, you are clinically obese.")
