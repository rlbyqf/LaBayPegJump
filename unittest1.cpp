#include "main.h"
#include <iostream>


using namespace std;
class PegJump
{
	public:
		void failNotEqual(double value, double v)
		{
			if(value == v)
				cout << "Test Passed"<<endl;
			else cout << "Test Failed"<<endl;
		}
		
		void PrintBoardTest()
		{
			int A[15] = {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
			double value = Print_Board(A);
			int v = 0;
			failNotEqual(value, v);
		}
};

	
int main()
{
	PegJump peg;
	peg.PrintBoardTest();
	return 0;
}


