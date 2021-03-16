#include <iostream>
#include <math.h>
#include <string>
#include <fstream>

using namespace std;

char path[100];

int main()
{
	// 2 задание 
	int** ptrArr;
	const size_t x = 4;
	const size_t y = 4;

	ptrArr = new int* [x];
	for (size_t i = 0; i < x; i++)
	{
		ptrArr[i] = new int[y];
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			ptrArr[i][j] = rand() % 51 - 25;

			cout << ptrArr[i][j] << " ";
		}
	}
	cout << endl;

	for (size_t i = 0; i < x; i++)
	{
		delete[] ptrArr[i];
	}


	delete[] ptrArr;
	ptrArr = nullptr;

	// 3 задание 


	const size_t size1 = 100;
	int arr1[size1];

	for (int i = 0; i < size1; i++)
	{
		arr1[i] = rand() % 100;

	}


	int z = 0;

	while (z < 2)
	{

		cout << "enter namefile ";
		cin.getline(path, 100);
		strcat_s(path, ".txt");


		ofstream fout(path);
		int i = 0;
		for (int element : arr1)
		{
			fout << "elem[" << i++ << "]=" << element << endl;
		}

		fout.close();

		z = z + 1;

	}

	// 4 задание 
	ifstream file1(path);
	ifstream file2(path);

	string content;
	content += string(istreambuf_iterator<char>(file1), istreambuf_iterator<char>());
	content += string(istreambuf_iterator<char>(file2), istreambuf_iterator<char>());


	char path[100];
	cout << "enter iteration namefile ";

	cin.getline(path, 100);
	strcat_s(path, ".txt");

	ofstream fout(path);
	fout << content;

	fout.close();



	// 5 задание 

	string file_in, s, find;
	cout << "Write your file: ";
	cin >> file_in;

	ifstream file(file_in);
	char c;

	while (!file.eof())
	{
		file.get(c);
		s.push_back(c);
	}
	file.close();


	cout << "Write your word for found: ";
	cin >> find;

	int pos = s.find(find);
	if (pos == -1)
	{
		cout << "Not found your word" << endl;
	}
	else
	{
		cout << "Your word " << find << " suchestvuet" << endl;
	}
	return 0;
}
