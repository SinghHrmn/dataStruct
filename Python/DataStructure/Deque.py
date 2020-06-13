class Deque(object):
    """
    Deque Implementation
    """

    def __init__(self):
        self.items = []

    def addFront(self, item):
        """Adds item to the front"""
        self.items.append(item)
    
    def addRear(self, item):
        """Adds item to the Rear"""
        self.items.insert(0, item)

    def removeFront(self):
        """Removes item from the front"""
        return self.items.pop()

    def removeRear(self):
        """Removes item from Rear"""
        return self.items.pop(0)

    def isEmpty(self):
        """Returns True if deque empty"""
        return self.items == []

    def size(self):
        """returns size of deque"""
        return len(self.items)