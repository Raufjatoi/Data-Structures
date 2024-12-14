### Qno1: Explain the procedure of stack implementation using a linked list.  
**Ans:**  

First, I created a `Node` structure that contains two components: `data` to store the value and a pointer `*next` to point to the next node. After that, I created a `Stack` structure, which includes a pointer `head` that points to the top of the stack (represented as a linked list).  

Next, I implemented the following methods:  

1. **Push method:**  
   - This method adds a new node to the top of the stack.  
   - A new node is created, its `data` field is initialized, and its `next` pointer is set to the current `head`.  
   - The `head` is then updated to this new node, effectively making it the new top of the stack.  

2. **Pop method:**  
   - This method removes and returns the top element of the stack.  
   - The `head` pointer is moved to the next node, and the previous top node is deleted.  
   - If the stack is empty, the method can handle it appropriately (e.g., by returning a specific value or printing a message).  

3. **Display method:**  
   - This method traverses the linked list from the `head` and prints the data in each node, effectively displaying the stack contents.  

Although I didn’t add an `isEmpty` method, it would be simple to implement. If the `head` is `NULL` (empty), the method would return `true`; otherwise, it would return `false`.