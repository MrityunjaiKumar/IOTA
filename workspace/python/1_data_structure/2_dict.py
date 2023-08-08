# Dictionary

# declaration
x={}
x['0']="zero"
x['1']="one"
x['2']="two"
x[3]="three"

print("x = {}".format(x))
print(type(x))

# Get data by key
print("x[3] = {}".format(x[3]))

print("x[3] = {}".format(x.get('2')))

print("x[1] = {}".format(x['1']))

# remove item with key
x.pop(3)
print("x = {}".format(x))

# get all the keys
print("All keys = {}".format(x.keys()))
# get all the values
print("All values = {}".format(x.values()))

print("All values type {}".format(type(x.values())))


# iterate items
for key,value in x.items():
    print("{} <--> {}".format(key,value))

print("-----------------------------------------------")
# JSON
import json
r = json.dumps(x)
print("r = {}".format(r))
print("type(r) = {}".format(type(r)))
loaded_data= json.loads(r)

print("loaded_data = {}".format(loaded_data))
print("type(loaded_data) = {}".format(type(loaded_data)))