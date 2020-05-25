#include <iostream>

using namespace std;

int main(){
	int x, a, b, sum;
	a = 1;
	b = 1;
	x = 4000000;
	sum = 0;
	while(b < x){
		if(b % 2 == 0){
			sum += b;
			}
		int temp = b;
		b += a;
		a = temp;
		
		}
	cout << sum;

}
