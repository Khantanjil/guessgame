#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
using std::cout;
using std::cin;

int main(){
    srand(time(0));
    int number;
    int guess;
    number = rand() % 10+1;
    do{
        std::cout << "Guess my number which is beetween 0-10: ";
        std::cin >> guess;
        if(guess>number){
            std::cout << "To high\n" << std::endl;
        } else if(guess<number){
            std::cout << "To low\n" << std::endl;
        } else{
            std::cout << "You guessed my number!";
        }
    }
    while(guess!=number);
}
