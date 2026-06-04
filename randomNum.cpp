#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0)); // Seed the random number generator

    for(int i=0;i<11;i++){
    int randomNum = rand() % 100 + 1; // Generate a random number between 1 and 100
    cout <<randomNum << endl;
}
    return 0;
}

