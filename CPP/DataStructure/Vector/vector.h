template <typename T>
class vector
{
    int cs = 0;
    int ms = 1;
    T *arr;

public:
    vector()
    {
        arr = new T[ms];
    }

    void push_back(T num)
    {
        // check the ms
        if (ms == cs)
        {
            T *old_arr = arr;
            arr = new T[ms * 2];
            ms = ms * 2;

            for (int i = 0; i <= cs; i++)
            {
                arr[i] = old_arr[i];
            }

            delete[] old_arr;
        }

        arr[cs] = num;
        cs++;
    }

    T begin()
    {
        return arr[0];
    }

    T end()
    {
        return arr[cs - 1];
    }

    void pop_back()
    {
        cs--;
    }

    T operator[](int i)
    {
        return arr[i];
    }

    int size()
    {
        return cs;
    }

    int capacity()
    {
        return ms;
    }
};
