''' Code 1
* 
* * 
* * * 
* * * * 
* * * * * 
'''


# outer loop to handle number of rows
for i in range(0, 5):

  # inner loop to handle number of columns
  for j in range(0, i+1):
  
    # printing stars
    print("* ",end="")

  # ending line after each row
  print("\r")



print("-----------------------------")

'''
        * 
      * * 
    * * * 
  * * * * 
* * * * * 
'''
# number of spaces
k = 2*5 - 2

# outer loop to handle number of rows
for i in range(0, 5):
  
    # inner loop to handle number spaces
    for j in range(0, k):
        print(end=" ")
  
    # decrementing k after each loop
    k = k - 2
  
    # inner loop to handle number of columns
    for j in range(0, i+1):
      
        # printing stars
        print("* ", end="")
  
    # ending line after each row
    print("\r")

# Function to demonstrate printing pattern triangle
def eqi_triangle_star(n):
     
    # number of spaces
    k = n - 1
 
    # outer loop to handle number of rows
    for i in range(0, n):
     
        # inner loop to handle number spaces
        for j in range(0, k):
            print(end=" ")
     
        # decrementing k after each loop
        k = k - 1
     
        # inner loop to handle number of columns
        # values changing acc. to outer loop
        for j in range(0, i+1):
         
            # printing stars
            print("* ", end="")
     
        # ending line after each row
        print("\r")
 
eqi_triangle_star(5)