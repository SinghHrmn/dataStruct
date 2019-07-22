class Demo:
    
    def __init__(self):
        self.__name = 'kriti'
        self._course = 'B.tech'
        self._age = 20
    
    def biodata(self):
        print(self.__name, self._course, self._age)

        
x = Demo()
x.biodata()
print(x.__name)
x.__name = 'Harman'
print(x.__name)
x.biodata()
print('hellos')
