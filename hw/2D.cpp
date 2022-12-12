#include <iostream>
using namespace std;
#include "2DProtoType.h"
#include "2DFuncBody.h"

int main()
{
	srand(time(NULL));
	/*int row = 5;
	int columbn = 5;*/
	int row, columbn;
	cout << "enter row:";
	cin >> row;
	cout << "enter columbn:";
	cin >> columbn;
	int min = -10;
	int max = 40;
	int** arr = CreatArr(row, columbn);
	FillArr(arr, row, columbn,min,max);
	PrintArr(arr, row, columbn);


	//------Task1-------------
	//cout << sumAllArr(arr, row, columbn);
	//---------------------------------------
	

	//-------Task2------------------
	//cout<<sumDioganalsArr(arr, row, columbn);
	//-----------------------------------------
	

	//---------Task3---------------------------
	/*cout<<MinNumArr(arr, row, columbn);
	cout << endl;
	cout<<MaxNumArr(arr, row, columbn);*/
	//-------------------------------------

	//--------TAsk4------------------------
	/*cout << ZeroCountInArr(arr, row, columbn);
	cout << endl;
	cout << PositiveCountInArr(arr, row, columbn);
	cout << endl;
	cout << NegativeCountInArr(arr, row, columbn);*/
	//------------------------------------------------

	//--------TASK5---------------------------------------
	//sumLineArr(arr, row, columbn);
	//-----------------------------------------------------

	//---------------TASk6------------------------------------
	//sumColumbnArr(arr, row, columbn);
	//-------------------------------------------------------

	//----------------TASK7------------------------------
	//SumPositiveLineArr(arr, row, columbn);
	//-----------------------------------------------------

	//---------------TASk8--------------------------------------
	//fillArrLineNUm(arr, row, columbn);
	//-----------------------------------------------------

	//------------TASk9----------------------------------
	//reverseColumbnArr(arr, row, columbn);
	//PrintArr(arr, row, columbn);
	//--------------------------------------------------

	//--------------TASk10---------------------------------
	/*reverseRowArr(arr, row, columbn);
	PrintArr(arr, row, columbn);*/

}