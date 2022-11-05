#include <iostream>

int main() {
    int number;
    int max1 = 0;
    int max2 = 0;
   
    
    
    std::cin >> number;
    while((number < 10) || (number >= 100)){
        std::cout << "Invalid input, please, try again..... " <<std::endl;
        std::cin >> number;
    }
    
   max1 = number % 10;
    max2 = number / 10;
    if(max1 > max2){
        std::cout <<"Output max digit: " << " " << max1 << std::endl;
    }
    else{
        if(max1 < max2){
            std::cout <<"Output max digit: " << " " << max2 << std::endl;
        }
        
        if(max1 == max2){
            std::cout << "They are equal" << std::endl;}
        
    }
       
    
    return 0;
}
