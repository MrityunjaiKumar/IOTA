# List declaration

x=[6,1,2,8,3,4,5]

print("x = {}".format(x))
print(type(x))

# Ascending order sort
x.sort()
print("x sorted = {}".format(x))

#  Descending order sort
x.sort(reverse=True)
print("x reverse sorted = {}".format(x))

#append
x.append(12)
print("x append = {}".format(x))

#remove
x.remove(2)
print("x remove = {}".format(x))

# getting an element, for example get 0th element
print(x[0])

print("------------------")

# iterate list
for d in x :
    print(d)
print("____________________")
# iterate list with index
for i,d in enumerate(x):
    print("{} <==>{}".format(i,d))