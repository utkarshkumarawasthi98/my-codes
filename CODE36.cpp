#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata();
};

void employee::getdata()
{
    cout << "THE VALUE of a is " << a << endl;
    cout << "THE VALUE of b is " << b << endl;
    cout << "THE VALUE of c is " << c << endl;
    cout << "THE VALUE of d is " << d << endl;
    cout << "THE VALUE of e is " << e << endl;
}
void employee::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee harry;
    harry.d = 34;
    harry.e = 2922;
    harry.setdata(1, 2, 3);
    harry.getdata();
    return 0;
}