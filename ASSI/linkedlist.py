class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
    
class ll:
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

    def addf(self , data):
        n = Node(data)
        n.next = self.head
        self.head = n;
    
    def view(self):
        if self.head is None:
            print('empty')
        else:
            t = self.head
            while t is not None:
                print(t.data, end=' -> ')
                t = t.next
            print('None')
    
    def search(self, v):
        pos = 0
        t = self.head
        while t is not None:
            if t.data == v:
                print(f'{v} found at {pos}')
                return
            t = t.next
            pos += 1
        print('not found')
    
    def remove(self, v):
        if self.head is None:
            print('empty')
            return
        if self.head.data == v:
            self.head = self.head.next
            print('removed')
            return
        
        t = self.head
        while t.next is not None:
            if t.next.data == v:
                t.next = t.next.next
                print('removed')
                return
            t = t.next
        print('not found')

l = ll()
l.add(1)
l.add(2)
l.add(3)
l.view()         
l.search(2)      
l.remove(2)
l.view()         
l.search(2)