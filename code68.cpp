#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {

        int j = 1;
        int k = 1;
        while (j <= n)
        {
            if (i + j >= n + 1)
            {
                cout << k;
                k++;
                j++;
            }
            else
            {
                cout << " ";
                j++;
            }
        }
        while ( k > 2)
        {
            k = k - 1;
            cout << k - 1;
        }

        cout << endl;
        i++;
    }

    return 0;
}