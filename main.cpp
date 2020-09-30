#include <iostream>

bool isPrime(int n){
    int counter = 0;
    for(int i = 1; i <= n; i++){
        if(n % 1 == 0){
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

}