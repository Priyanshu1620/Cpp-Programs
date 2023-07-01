#include<iostream>

using namespace std;

class crc
{
    private:
    float x;
    public:
    float perimeter(int);
};
float crc::perimeter(int r)
{
    x = 2*3.14*r;
    return x;
}
int main()
{
    crc c1;
    int r;
    cout << "Enter the radius of circle: ";
    cin >> r ;
    cout << endl << "Perimeter of circle is: " << c1.perimeter(r) << endl;
    return 0;
}
