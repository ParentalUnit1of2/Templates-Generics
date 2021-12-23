#include <iostream>
using namespace std;

template<typename T>

void Swap(T& a, T& b) {
    int temp = a;
    a = b;
    b = temp;

}
/*
Not needed with the template 
void Swap(char& c, char& d) {
    char temp = c;
    c = d;
    d = temp;
}
*/

    int main()
{
    int a=5, b=7;

    cout << a << " - " << b << endl;
    Swap<int>(a, b);
    cout << a << " - " << b << endl;

    char c = 'M', d = 'Z';

    cout << c << " - " << d << endl;
    Swap<char>(c, d);
    cout << c << " - " << d << endl;





    system("pause>0");
   
}

