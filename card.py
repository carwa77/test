class Card:

    def __init__(self,suit,number):
        self.suit = suit
        self.number = number


    def __repr__(self):
        return self.number + " of " + self.suit

my_card = Card("hearts","6")
print(my_card)