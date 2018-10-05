/*Question 3 (Loops and Logic): The integer 36 has a peculiar property: it is a perfect square, and is also the sum of the integers from 1 through 8. The next such number is 1225 which is 352, and the sum of the integers from 1 through 49. Find the next number (or numbers) that is a perfect square and also the sum of a series 1...n. This next number may be greater than 32767 (range of int, so use long). You may use library functions that you know of, (or mathematical formulas) to make your program run faster. (Note: depending on your machine and your program, it can take quite a while to find this number.)*/

//Include the library
#include <iostream>
#include<cmath>
using namespace std;

//Main function
int main(){
	long square, sum;
	cout<<"The numbers that is a perfect square and also the sum of a series 1...n"<<endl;
	//using if and for loop
	for(long i=1; i > 0; i++){
	sum = 0;
	square = i*i;
		for(long j=1; j <= square; j++){
		
		sum = sum + j;
			if (sum == square){
			cout << sum <<endl;
			}			
		}
	}
//terminating program
return 0;
}
