#include<iostream>
using namespace std;
int main()
{
int fahrenheit,celcius,reamur,kelvin;
    cout<<"Konversi Suhu (Fahrenheit)"<< endl;
    cout << "Fahrenheit : ";
    cin >> fahrenheit;
    celcius=(fahrenheit-32)*5/9;
    reamur=(fahrenheit-32)*4/9;
    kelvin=(fahrenheit-32)+273;
    cout<<"HASIL CELCIUS : "<<celcius;
    cout<<endl;
    cout<<"HASIL REAMUR : "<<reamur;
    cout<<endl;
    cout<<"HASIL KELVIN : "<<reamur;
    return 0;
}