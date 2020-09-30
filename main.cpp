#include <iostream>
#include <vector>

bool isPrime(int n){
    int counter = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            counter++;
        }
    }
    if(counter == 2){
        return true;
    }else{
        return false;
    }
}

int main(){
    int number;
    std::cout << "Number: ";
    std::cin >> number;
    int n = number;
    std::vector<int> v;
    while(n != 1){
        for(int i = 2; i <= n; i++){
            if(isPrime(i) && n % i == 0){
                v.push_back(i);
                n = n/i;
                i = n;
            }
        }
    }
    for(auto i = v.begin(); i != v.end(); ++i){
        std::cout << *i << std::endl;
    }
    return 0;
}