#include <iostream>

using namespace std;

int main()
{
    int size, a = 1;

    cin >> size;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size * 2; ++j)
        {
            if (j < size && j < a || j >= size && j >= size * 2 - a)
                cout << '*';
            else
                cout << ' ';
        }

        if (i < size / 2)
            a += 2;
        else
            a -= 2;

        cout << endl;
    }

    system("pause");
    return 0;
}

