// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other// Counting sort in C programming
#include <iostream>
#include <string.h>
using namespace std;
void solveTowersOfHanoi(int n, string source, string aux, string dest)
{
	// If only 1 disk, make the move and return.
	if (n == 1)
	{
		cout << source + " --> " + dest+"\n" ;
		return;
	}

	// Move top n-1 disks from A to B using C as auxiliary.
	solveTowersOfHanoi(n - 1, source, dest, aux);

	//Move remaining disks from A to C
	cout << source + " --> " + dest+"\n";

	// Move n-1 disks from B to C using A as auxiliary
	solveTowersOfHanoi(n - 1, aux, source, dest);

}
int main(void) {

	cout<<"Enter number of disks :- ";
	int n=0;
	cin >> n;

	cout << "Move disks as below illustration.\n";
	solveTowersOfHanoi(n, "A", "B", "C");
    
}

//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
