import random

def game(comp , you):
    if comp== you:
       return None
    elif comp=="r":
        if you=="p":
            return True
        elif you=="s":
            return False
    elif comp=="p":
        if you=="s":
            return True
        elif you=="r":
            return False
    elif comp=="s":
        if you=="r":
            return True
        elif you=="p":
            return False

print("Computer's Turn : Rock(r) Paper(p) or Scissor(s) ?")

randNo = random.randint(1,3)
if randNo == 1 :
    comp = "r"
elif randNo == 2 :
    comp = "p"
elif randNo == 3 :
    comp = "s"

you = input("Your's Turn : Rock(r) Paper(p) or Scissor(s) ? : ")
a = game(comp , you)

print(f"Computer chosen : {comp}")
print(f"You chosen : {you}")

if a== None:
    print("Game is tie !!!")
elif a :
    print("You Win !!!")
else:
    print("You Lose !!!")