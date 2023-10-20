#include <iostream>

using namespace std;

int main()
{
    int firstValue, secondValue, variabelBaru;
    firstValue = 10;
    secondValue = 8;

    cout<<"Menukar nilai Variabel dengan variabel tambahan"<<endl;
    cout<< "----------------------------------------------"<<endl;
    cout<<"first value: " <<firstValue<<endl;
    cout<< "second value: "<< secondValue<<endl;
    cout<< "----------------------------------------------"<<endl;

   variabelBaru = firstValue;
   firstValue = secondValue;
   secondValue = variabelBaru;

   cout<< "first value: " <<firstValue<<endl;
   cout << "second value: "<<secondValue<< endl;

    return 0;
}
