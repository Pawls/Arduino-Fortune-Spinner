#create a function that simulates the spinner which randomly picks out a number
#from 1 to 8 (representing the fortunes),
#then save how many times that number was randomized, then chart it.
import matplotlib.pyplot as plt
import random


#loop through and randomize a case number
#then increment that case's number 
#after 100 spins, calculate the data plot base on each case's frequency
case_zero= 0
case_one=0
case_two=0
case_three=0
case_four = 0
case_five = 0
case_six = 0
case_seven = 0
for i in range(1, 100):
  case_num = random.randint(1, 8)
  if case_num == 1:
    case_zero +=1
  elif case_num == 2:
    case_one +=1
  elif case_num == 3:
    case_two +=1
  elif case_num == 4:
    case_three += 1
  elif case_num == 5:
    case_four += 1
  elif case_num == 6:
    case_five += 1
  elif case_num == 7:
    case_six += 1
  elif case_num == 8:
    case_seven +=1








### data plot ###
x1 = [1] #case 0
y1 = [case_zero] #case 0

x2 = [2] #case 1
y2 = [case_one] # case 1

x3 = [3] #case 2
y3 = [case_two] #case 2

x4 = [4] #case 3
y4 = [case_three] #case 3

x5 = [5] #case 4
y5 = [case_four] #case 4

x6 = [6] #case 5
y6 = [case_five] #case 5

x7 = [7] #case 6
y7 = [case_six] #case 6

x8 = [8] #case 7
y8 = [case_seven] #case 7

plt.bar(x1, y1, label = 'Fortune 1', color = 'red')
plt.bar(x2, y2, label = 'Fortune 2', color = 'orange')
plt.bar(x3, y3, label = 'Fortune 3', color = 'yellow')
plt.bar(x4, y4, label = 'Fortune 4', color = 'greenyellow')
plt.bar(x5, y5, label = 'Fortune 5', color = 'cyan')
plt.bar(x6, y6, label = 'Fortune 6', color = 'blue')
plt.bar(x7, y7, label = 'Fortune 7', color = 'blueviolet')
plt.bar(x8, y8, label = 'Fortune 8', color = 'magenta')

plt.xlabel('Fortune Number')
plt.ylabel('Frequency')

plt.title('Fortune Spin 100:\n How many times does that Fortune get picked?')

plt.legend()
plt.show()


