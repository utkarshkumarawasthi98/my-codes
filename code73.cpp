#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    int h=1;
    while (i <= n)
    {

        int j = 1;
        
        while (j <= n)
        {

            if (i + j >= n + 1)
            {

                cout << h;
                h++;
            }
            else
            {
                cout << " ";
            }

            j++;
        }
        j = i - 1;
        while (j > 0)
        {
            cout << j;
            j = j - 1;
        }

        cout << endl;
        i++;
        h=h-1;
    }

    return 0;
}