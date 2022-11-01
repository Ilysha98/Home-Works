#include <vector>
#include <iostream>

using namespace std;

int main() {
    int number = 123;
    int count = 0;
    while(number > 0){
        int last = number % 10;
        number = number /=10;
        count += last;
        
        cout << count;
    }
    
    
   
    return 0;
}
