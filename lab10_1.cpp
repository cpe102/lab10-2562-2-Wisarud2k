#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
    int i;
    i=rand()%9;
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    switch(i){
        case 0:
        cout << "you will get A in this 261102";
        break;
        case 1:
        cout << "you will get B+ in this 261102";
        break;
        case 2:
        cout << "you will get B in this 261102";
        break;
        case 3:
        cout << "you will get C+ in this 261102";
        break;
        case 4:
        cout << "you will get C in this 261102";
        break;
        case 5:
        cout << "you will get D+ in this 261102";
        break;
        case 6:
        cout << "you will get D in this 261102";
        break;
        case 7:
        cout << "you will get F in this 261102";
        break;
        default:
        cout << "you will get W in this 261102";
        
    }
    return 0;
}



// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
