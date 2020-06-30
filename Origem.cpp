#include<iostream>
#include<iomanip>
#include<cmath>
#include <stdlib.h>
using namespace std;

int f(int c) { return sqrt(c)*5; }		//sqrt(x)=f(x)^(-1)
int x,y,meio,i;							//sendo f(x)=x^2

int main() {
	while (1) {

		cout << "y inicial:";
		cin >> y;

		cout << endl;
		cout << "meio:";
		cin >> meio;
		cout << endl;


		i = y/2;
		for (y = y; y>=0; y--)
		{


			if ((y % (f(y)))== 0) {
				cout << setw(meio - (f(y)+i)) << "." << setw(f(y)+i) << "|" << setw(f(y)+i) << endl;
			}
			else {
				cout << setw(meio - (f(y) + 1+i)) << "." << setw(f(y)+1+i) << "|" << setw(f(y) + 1+i) << endl;
				i--;
			}
			

		}
		system("cls");
	}
	return 0;

}