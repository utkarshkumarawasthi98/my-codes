#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n = 7;
    while (i <= 4)
    {
        int j = 1;
        int k = i;

        while (j <= n)
        {
            if (i + j >= n + 1)
            {
                cout << "*";
                k++;
                j++;
            }
            else
            {
                cout << " ";
                j++;
            }
        }
        k = k - 1;
        while (k > i)
        {
            cout << "*";
            k = k - 1;
        }

        cout << endl;
        i++;
    }

    while (i > 4 & i <= 7)
    {
        cout << "   ";
        int j = 1;
        while (j <= 7)
        {
            if (j <= 4)
            {
                if (abs(i - j <= 3))
                {
                    cout << "*";
                    j++;
                }
                else
                {
                    cout << " ";
                    j++;
                }
            }
            else if (j > 4)
            {
                if (i + j <= 11)
                {
                    cout << "*";
                    j++;
                }
                else
                {
                    cout << " ";
                    j++;
                }
            }
        }
        cout << endl;
        i++;
    }

    return 0;
}
