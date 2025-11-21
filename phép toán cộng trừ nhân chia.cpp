#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cout << "dien a,b,c de tinh cac phep toan" << endl;
    
	cout << "a = "; cin >> a ;
	cout << "b = "; cin >> b ;
    cout << "c = "; cin >> c; cout << endl ;
     
    cout << "\n tong= " << a + b + c
	     << "\n hieu= " << a - b - c
         << "\n tich= " << a * b * c
         << "\n thuong= " << (float)a / b / c << endl;
    return 0;
}

