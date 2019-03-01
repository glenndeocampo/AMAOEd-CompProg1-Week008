#include <cstdlib>
#include <iostream>

using namespace std;

int main () {
    int n[6];
    for(int i=0; i<6; i++){
        cout << "Enter number[" << i+1 << "]: ";
        cin >> n[i];
    }
cout << endl;
for (int i=0; i<6; i++){
    for (int t=i; t<6; t++){
        if (n[i]>n[t]){
            int temp=n[i];
            n[i]=n[t];
            n[t]=temp;
        }
    }
}
cout << "The sorted numbers are: " << n[0] <<",";
cout << n[1] << "," << n[2] << "," << n[3] << ",",
cout << n[4] << "," << n[5] << endl;


system("pause");
}
