class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class linkedlist:
    def __init__(self):
        self.head = None
    
    def add(self, data):
        n = Node(data)
        
        if self.head is None:
            self.head = n
        else:
            t = self.head
            while t.next is not None:
                t = t.next 
            t.next = n
    
    def view(self):
        if self.head is None:
            print('empty')
        else:
            t = self.head
            while t is not None:
                print(t.data, end=' -> ')
                t = t.next
            print('None')
    
    def search(self, value):
        t = self.head
        position = 0
        while t is not None:
            if t.data == value:
                print(f'{value} found at {position}')
                return
            t = t.next
            position += 1
        print(f'{value} not found')
    
    def remove(self, value):
        if self.head is None:
            print('empty')
            return

        if self.head.data == value:
            self.head = self.head.next
            print(f'{value} removed')
            return
        
        t = self.head
        while t.next is not None:
            if t.next.data == value:
                t.next = t.next.next
                print(f'{value} removed')
                return
            t = t.next
        
        print('not found')

l = linkedlist()
l.add(1)
l.add(2)
l.add(3)
l.view()         
l.search(2)      
l.remove(2)
l.view()         
l.search(2)      
