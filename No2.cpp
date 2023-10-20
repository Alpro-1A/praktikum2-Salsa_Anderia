#include <iostream>

using namespace std;

int main()
{
    int a, b;
    // a =  jumlah bebek
    // b = jumlah teman

    cout << "--------------------------------------------------"<<endl;
    cout<< "               Program Hitung Bebek                "<< endl;
    cout << "--------------------------------------------------"<<endl;
    cout<< "Jumlah bebek = ";
    cin >> a;
    cout<< "Jumlah teman = ";
    cin >> b;
    cout << "--------------------------------------------------"<<endl;
    cout << "Jumlah yang harus dibagikan per orang = " << (a/b) <<endl;
    cout << "Jumlah sisa bebek = "<< (a%b) << endl;
    cout << "--------------------------------------------------"<<endl;


   return 0;
}
