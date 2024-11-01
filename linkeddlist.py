class Node:
        def __init__(self, data):
                self.data = data
                self.next  = None

class LinkedList:
        def __init__(self):
                self.start = None
        
        def insertLast(self, value):
                newNode  = Node(value)

                if self.start == None:
                        self.start  = newNode
                else:
                        temp = self.start
                        while temp.next != None:
                                temp = temp.next
                                print(f"Next node visited, there is not null in next {temp.next}")
                        temp.next = newNode
                        print(f"We are at last node because there is a null in temp.next {temp.next}")
        
        def view(self):
                if self.start == None:
                        print("List is empty")
                else:
                        temp = self.start
                        while temp.next != None:
                                temp = temp.next
                                print(temp.data)
                        


list1 = LinkedList()
list1.insertLast(100)
list1.insertLast(200)
list1.insertLast(300)
list1.view()
