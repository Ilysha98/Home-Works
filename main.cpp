#include <iostream>
#include <vector>
using namespace std;

int main() {

    
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++)
    {
        array[i] = rand() % 100;
        cout << array[i] <<" ";
    
        if( array[i] >= 10 && array[i] <= 20)
        {
            
            cout <<"- " << "["<< array [i] * array[i] << "] This is number ";
        }
    }
    return 0;
}

