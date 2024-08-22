#include <iostream>
#include <cstdlib>
#include <limits> 
#include <ios>
#include <ctime> 

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
     cout<<"enter your level"<<endl;
     cout<<"1.Easy(between 1 to 10)\n 2.Hard (between 1 to 100)"<<endl;
     int n;
     cin>>n;
     cout<<endl;
     int s;
     if(n==1){
        s=10;
     }
     else if(n==2){
        s=100;
     }
     else{
        cout<<"you entered wrong choice.please guess between 1to 10"<<endl;
        s=10;
        
     }
    int secretNumber = rand() % s+ 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number Game!\n";
    cout << "Try to guess the number .\n";

    do {
        
        cout << "Enter your guess: ";

       
        while (!(cin >> guess)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a number: ";
        }

       
         if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        } else if (guess < secretNumber) {
            cout << "number is too low.! Try again.\n";
        } else {
            cout << "number is too high.! Try again.\n";
        }

        attempts++;
    } while (guess != secretNumber);

    return 0;
}