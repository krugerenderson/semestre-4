class List:
    def __init__(self):
        self.size = 0
        self.vector = []

    def insert(self, value):
        self.size += 1
        self.vector.append(value)

    def remove(self):
        if self.size == 0:
            print("Lista Vazia!")
        else:
            self.size -= 1
            self.vector.pop()

    def firstItem(self):
        if self.size == 0:
            print("Lista Vazia!")
            return None
        else:
            return self.vector[0]
            
    def lastItem(self):
        if self.size == 0:
            print("Lista Vazia!")
            return None
        else:
            return self.vector[self.size-1]
        
    def getSize(self):
        return self.size