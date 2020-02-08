#include <iostream>
using namespace std;
void main()
{
	int counter = 100;
	while (counter--)
		cout << rand() % 7 + 1 << endl;
}
