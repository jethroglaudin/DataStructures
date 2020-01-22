class Stack:
    # Constructor
    def __init__(self):
        # set empty array where data will be pushed into
        self.data = []
        # this will keep track for how much elements are within our array
        self.length = 0

    def push(self, element):
        # append is just like push in javascript. Will append new element to the end of the array/list
        self.data.append(element)
        self.length += 1


    def Top(self):
        return self.data[len(self.data)-1]


    def Pop(self):
        if(self.length > 0):
            self.length -= 1
            return self.data.pop()


    def isEmpty(self):
        return self.length == 0


stack = Stack()

stack.push(1)
stack.push(5)
stack.push(3)
stack.push(4555)
print("length: ", stack.length)
stack.Pop()
print("length: ", stack.length)
print(stack.data)
print(stack.Top())




