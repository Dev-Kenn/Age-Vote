#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int x = 18, y;

    cout<< "Enter your age: ";
    cin>> y;
    
    if (x < y)
    {
        cout<< "YOU ARE QUALIFIED TO VOTE";
    }
    else
    {
        cout<<  "YOU ARE NOT QUALIFIED TO VOTE";
    }
	return 0;
}
