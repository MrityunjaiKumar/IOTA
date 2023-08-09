from enum import Enum
class AnimalType(Enum):
    DOG=1
    CAT=2
    SNAKE=0

class Animal:
    def __init__(self,animal_type,animal_name) -> None:
        self.myName= animal_name
        self.myType=animal_type
        print("enum value {}".format(animal_type.value))
    def getSound(self):
        if (self.myType==AnimalType.DOG):
            print("bark")
        if(self.myType==AnimalType.CAT):
            print("meow")
        if(self.myType==AnimalType.SNAKE):
            print("hiss")
    def getLegsCount(self):
        if (self.myType==AnimalType.DOG):
            print("4")
        if(self.myType==AnimalType.CAT):
            print("4")
        if(self.myType==AnimalType.SNAKE):
            print("0")

#--------------------------

dog0=Animal(AnimalType.DOG,"simba")
dog0.getSound()
dog0.getLegsCount()

cat0=Animal(AnimalType.CAT,"rani")
cat0.getSound()
cat0.getLegsCount()

snake0=Animal(AnimalType.SNAKE,"vasuki")
snake0.getSound()
snake0.getLegsCount()