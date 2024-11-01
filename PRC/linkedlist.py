class node:
    def __init__(self , data):
        self.data = data
        self.next = None

class linkedlist:
    def __init__(self):
        self.head = None
    
    def add(self , data):
        new_node = node(data)
        if not self.head:
            self.head = new_node
        else:
            current = self.head 
            while current.next:
                current = current.next
            current.next = new_node
    
    def display(self):
        current = self.head 
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print('none')

    def delete (self , key):
        current = self.head

        if current and current.data == key:
            self.head = current.next 
            current = None
            return
        
        prev = None 
        while current and current.data != key:
            prev = current
            current = current.next 


        if current is None:
            print('key not found')
            return
        
        prev.next = current.next
        current = None 

l1 = linkedlist()
l1.add(1)
l1.add(2)
l1.add(3)
l1.add(4)

print('linked list')
l1.display()

l1.delete(3)

print('after delete')
l1.display()