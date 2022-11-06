#include <iostream>
int sumDigits(long long);

int main() {
    long long number;
    std::cout << "Input number: " << std::endl;
    std::cin >> number;
    while(number != 0)
    {
        if(number != 0)
        {
            if((number >= 1000) && (number < 10000))
            {
                if(sumDigits(number) == 15)
                {
                    std::cout << "Good number : " << number << " Sum Digits: " << sumDigits(number) <<std::endl;
                    
                }
            }
        }
        std:: cin >> number;
     }
    
    
    
    return 0;
}
int sumDigits(long long N){
    long long buf = N;
    int res = 0;
    while(buf > 0){
        res = res + (buf % 10);
        buf /= 10;
    }

    return res;
    
}
