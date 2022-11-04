#include <iostream>

int main() {
    int number;
    int max1 = 0;
    int max2 = 0;
   
    
    
    std::cin >> number;
    if((number < 10) || (number >= 100)){
        std::cout << "Invalid input, please, try again..... " <<std::endl;
    }
    
   max1 = number % 10;
    max2 = number / 10;
    if(max1 > max2){
        std::cout <<"Output max number: " << std::endl;
        std:: cout << max1 << " ";}
    if(max1 == max2){
        
        std::cout << "They are equal" << std::endl;
    }
    else{
        std::cout <<"Output max number: " << std::endl;
        std::cout << max2 << " ";
    }
    return 0;
}
