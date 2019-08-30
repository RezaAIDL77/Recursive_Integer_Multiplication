// Integer multiplication
// Recursive method
// R_I_M.cpp
//		Created on: Jan 1, 2019
//		Author	  : Reza Rashetnia
//		Website 	// http://rashetnia.com
//		Linkedin	// www.linkedin.com/in/rezarashetnia
//		Github  	// github.com/RezaAIDL77
#include<iostream>
using namespace std;

int Multi(int A, int B)
	{
		if ( A < B ) // Swap the numbers
	        return Multi ( B , A ) ;
		else if (B != 0)
	        return (A + Multi(A, B - 1));
	    else
	        return 0;
	}
// MAIN FUNCTION
int main() {
    int A, B, Y			; 	// Y = A * B
    cout << "enter two numbers: ";
    cin >> A >> B 		;	// Provide Integers
    Y = Multi(abs(A), abs(B))		; 	// Product
    if (A < 0){
    	if ( B < 0){}
    	else{
    		Y = -Y ;
    	}
    }
    else if (B < 0)
    	Y = -Y ;
    cout <<"The product is: " << Y ; // Print
    return 0;
}
