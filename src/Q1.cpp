#include <cstdlib>
#include <iostream>

using namespace std;

int main () {

    int n[6];
    for(int i=0; i<6; i++){
        cout << "Enter number [" << i+1 << "]: ";
        cin >> n[i];
    }
    cout << endl;
    cout << "\nThe numbers you entered are: " << n[0] << ",";
    cout << n[1] << "," << n[2] << "," << n[3] << ",";
    cout << n[4] << "." << n[5] << endl; 

system("pause");

}
