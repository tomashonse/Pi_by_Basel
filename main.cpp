#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main(){
	
	double total = 0;
	double n = 12345; // Modify this value to get more or less terms in the series
	
	for(int i = 0; i < n; i++){ 
		total += 1/pow(i+1, 2);
	}
	
	double pi = sqrt(6 * total);
	
	cout.precision(15); // Modify this value to get more or less digits
	cout << "The value approximate value of pi is: " << pi << endl;

}
