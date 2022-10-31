#include <iostream>
using namespace std;


int main() {
    int n;
    int sum = 0;
    int i = 0;
    cin >> n;
    
    while( i < n )
    {
        i++;
      
        sum = sum + i;
        cout << sum << " ";
    }
    
    return 0;
}
