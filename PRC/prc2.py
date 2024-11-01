class node:
    def __init__(self , data):
        self.data = data
        self.next = None

class linkedlist:
    def __init__(self):
        self.head = None
    
    def add(self , data):
        n = node(data)
        if not self.head: # self.head != None
            self.head = n 
        else:
            current = self.head 
            while current.next:
                current = current.next
            current.next = n

    def display(self):
        current = self.head 
        while current:
            print(current.data, end=' -> ')
            current = current.next
        print('none')


list = linkedlist()

list.add(1)
list.add(2)

list.display()