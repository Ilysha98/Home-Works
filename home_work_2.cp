#include <iostream>
#include <vector>
using namespace std;

void init_mass (int *arr, int n)
{
    
    int numbers[n];
    for(int i = 0; i < n; i++)
    {
        numbers[i] = i + 1;
        cout << numbers[i] << " ";
        
    }
}



int main() {
    
    
        for( int i = 35; i <= 87; i++){
        
        if(i % 7 == 1 || i % 7 == 2 ||i % 7 == 5)
            cout << "this is element = " << i;
       
    }
            
    
    
    return 0;
}

