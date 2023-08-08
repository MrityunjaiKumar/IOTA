def isThisEvenNumber(x):
    if x%2==0:
        return True
    return False

print("2 ==> {}".format(isThisEvenNumber(2)))

print("5 ==> {}".format(isThisEvenNumber(5)))

print("10 ==> {}".format(isThisEvenNumber(10)))


def isThisPrimeNum(x):
    # If given number is greater than 1
    if x > 1:
        # Iterate from 2 to n / 2
        for i in range(2, int(x/2)+1):
            # If num is divisible by any number between
            # 2 and n / 2, it is not prime
            if (x % i) == 0:
                return False
                # break

        else:
            return True
    else:
        return False
print("2 prime? = {}".format(isThisPrimeNum(2)))
print("6 prime? = {}".format(isThisPrimeNum(6)))


