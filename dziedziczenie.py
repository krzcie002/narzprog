import math

class Punkt:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def coordinates(self):
        print(self.x) 
        print(self.y)
    def uklad(self):
        r = math.sqrt(pow(self.x, 2)+pow(self.y, 2)) 
        print(r)


class Trygonometria(Punkt):
    def kont(self):
        print(math.sin(self.y/(math.sqrt(pow(self.x, 2)+pow(self.y, 2)))))



p1 = Punkt(2, 2)
#p1.coordinates()  
#p1.uklad()
p2 = Trygonometria(4, 5)
p2.kont()