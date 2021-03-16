#include <iostream> 
#include <math.h> 
#include <string> 
#include <fstream> 

using namespace std;

int main()
{
	// 1 задание 

	int* ptrArr;
	int n;
	cout << "YOUR SIZE ARR: ";
	cin >> n;

	if (n > 0)
	{
		ptrArr = new (nothrow) int[n];
		if (ptrArr != nullptr)
		{
			for (size_t i = 0; i < n; i++)
			{
				ptrArr[i] = pow(2,i);
				cout << ptrArr[i] << " ";
			}

			delete[] ptrArr;
			ptrArr = nullptr;
		}
		else
		{
			cout << "Error!";
		}
	}
	return 0;
}