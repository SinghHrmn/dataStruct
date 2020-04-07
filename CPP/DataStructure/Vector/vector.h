
class vector
{
    int cs = 0;
    int ms = 1;
    int *arr;

public:
    vector()
    {
        arr = new int[ms];
    }

    void push_back(int num)
    {
        // check the ms
        if (ms == cs)
        {
            int *old_arr = arr;
            arr = new int[ms * 2];
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

    int begin()
    {
        return arr[0];
    }

    int end()
    {
        return arr[cs - 1];
    }

    int pop_back()
    {
        cs--;
    }

    int operator[](int i)
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
