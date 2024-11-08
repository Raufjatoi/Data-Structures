class N:
    def __init__(self, d):
        self.d = d
        self.n = None

class ll:
    def __init__(self):
        self.h = None

    def add(self, d):
        # Directly add at the end by finding the last node
        if self.h is None:
            self.h = N(d)
        else:
            # Move `self.h` to end but reset it afterward
            original_h = self.h
            while self.h.n is not None:
                self.h = self.h.n
            self.h.n = N(d)
            self.h = original_h

    def dis(self):
        # Display without changing `self.h`
        if self.h is None:
            print('e')
        else:
            original_h = self.h
            while self.h is not None:
                print(self.h.d, end='->')
                self.h = self.h.n
            print('n')
            self.h = original_h

    def se(self, v):
        # Search without changing `self.h`
        p = 0
        found = False
        original_h = self.h
        while self.h is not None:
            if self.h.d == v:
                print(f'{v} at {p}')
                found = True
                break
            self.h = self.h.n
            p += 1
        if not found:
            print('!found')
        self.h = original_h

    def rem(self, v):
        # Remove node without changing `self.h`
        if self.h is None:
            print('e')
        else:
            if self.h.d == v:
                # Special case: remove head node
                self.h = self.h.n
                print('r')
            else:
                # Find node to remove
                original_h = self.h
                prev = None
                while self.h is not None:
                    if self.h.d == v:
                        prev.n = self.h.n
                        print('r')
                        break
                    prev = self.h
                    self.h = self.h.n
                else:
                    print('!find')
                self.h = original_h

l = ll()
l.add(1)
l.add(2)
l.se(3)
l.se(1)
l.rem(1)
l.se(1)
l.dis()