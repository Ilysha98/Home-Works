#include <iostream>
using namespace std;


int main() {
    
    int n;
    cin >> n;
    int mass[n];
    for(int i = 0; i < n; i++)
    {
        mass[i] = i+1;
        cout << mass[i] <<" ";
    }
    
    cout << endl;
    
    for( int i = 35; i <= 87; i++){
        if(i % 7 == 1)
        {
            cout << "This is element: " << "["<< i <<"]" << " = "<< i % 7 << endl;
        }
        if(i % 7 == 2)
        {
            cout << "This is element: " << "["<< i <<"]" << " = "<< i % 7 << endl;
        }
        if(i % 7 == 5)
        {
            cout << "This is element: " << "["<< i <<"]" << " = "<< i % 7 << endl;
        }

    }
    
    
    return 0;
}
