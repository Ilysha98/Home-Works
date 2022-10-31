#include <iostream>
#include <vector>
using namespace std;

void init_mass (int *arr, int n)
{
    cin >> n;
    cout << endl;
    int numbers[n];
    for(int i = 0; i < n; i++)
    {
        numbers[i] = i + 1;
        cout << numbers[i] << " ";
        
    }
}



int main() {
  
    
    int array[100];
    init_mass(array, 100);
    cout << endl;
    for(int i = 35; i < 87; i++)
    {
        if (array[i] % 7 == 1 || array[i] % 7 == 2 || array[i] % 7 == 5)
        {
            cout << array[i] << " ";
        }
}
   
            
    
    
    return 0;
}

