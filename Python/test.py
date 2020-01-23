class Demo:

    def __init__(self):
        self._name = 'kriti'
        self._course = 'B.tech'
        self._age = 20

    def biodata(self):
        print(self._name, self._course, self._age)


x = Demo()
x.biodata()
print(x._name)
x.__name = 'Harman'
print(x.__name)
x.biodata()
print('hellos')
i = 1
while(True):
    print(i)

    if (i == 10):
        break
    i += 1
