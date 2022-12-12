#pragma once
int** CreatArr(int row, int columbn)
{
	int** arr = new int* [row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[columbn];
	}
	return arr;
}

void FillArr(int** arr, int row, int columbn,int min,int max)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < columbn; j++)
		{
			arr[i][j] = min + rand() % (max - min);
		}
	}
}

void PrintArr(int** arr, int row, int columbn)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < columbn; j++)
		{
			cout << arr[i][j] << " ";
		}cout << endl;
	}
	cout << endl;
}

//--------------TASK1-----------------------
int sumAllArr(int** arr, int row, int columbn)
{
	int sum = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < columbn; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
//---------------TASK2-----------------------------------
int sumDioganalsArr(int** arr, int row, int columbn)
{
	int sumDioganals = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < columbn; j++)
		{
			if (i == j)
			{
				sumDioganals += arr[i][j];
			}
			if (i + j == row - 1)
			{
				sumDioganals += arr[i][j];
			}
		}
	}
	return sumDioganals;
}

//-----------------TASK3--------------------------------
int MinNumArr(int** arr, int row, int columbn)
{
	int min = arr[0][0];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < columbn; j++)
		{
			if (min > arr[i][j]) {
				min = arr[i][j];
			}
		}
	}
	return min;
}

int MaxNumArr(int** arr, int row, int columbn)
{
	int max = arr[0][0];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < columbn; j++)
		{
			if (max < arr[i][j]) {
				max = arr[i][j];
			}
		}
	}
	return max;
}

//---------------TAsk4----------------------------------
int ZeroCountInArr(int** arr, int row, int columbn)
{
	int ZeroCount = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < columbn; j++)
		{
			if (arr[i][j] == 0) {
				ZeroCount++;
			}
		}
	}
	return ZeroCount;
}

int PositiveCountInArr(int** arr, int row, int columbn)
{
	int PositiveCount = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < columbn; j++)
		{
			if (arr[i][j] > 0) {
				PositiveCount++;
			}
		}
	}
	return PositiveCount;
}

int NegativeCountInArr(int** arr, int row, int columbn)
{
	int NegativeCount = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < columbn; j++)
		{
			if (arr[i][j] < 0) {
				NegativeCount++;
			}
		}
	}
	return NegativeCount;
}

//----------------TASK5-------------------------------------
void sumLineArr(int** arr, int row, int columbn)
{
	int LineNUm = 0;
	for (int i = 0; i < row; i++)
	{
		int sumLine = 0;
		
		for (int j = 0; j < columbn; j++)
		{
			sumLine += arr[i][j];
		}
		LineNUm++;
		cout << LineNUm << "--->" << sumLine << endl;
	}
}

//-----------------TASK6---------------------------
void sumColumbnArr(int** arr, int row, int columbn)
{
	int ColumbnNum = 0;
	for (int i = 0; i < columbn; i++)
	{
		int sumColumbn = 0;

		for (int j = 0; j < row; j++)
		{
			sumColumbn += arr[j][i];
		}
		ColumbnNum++;
		cout << ColumbnNum << "--->" << sumColumbn << endl;
	}
}

//-------------------TASk7---------------------------------------
void SumPositiveLineArr(int** arr, int row, int columbn)
{
	
	for (int i = 0; i < row; i++)
	{
		int sumPostive = 0;
		for (int j = 0; j < columbn; j++)
		{
			if (arr[i][j] > 0) 
			{
				sumPostive += arr[i][j];
			}
			else
			{
				break;
			}
		}
		cout << i << "--->" << sumPostive << endl;
	}
}

//-----------------------TASK8-----------------------------------
void fillArrLineNUm(int** arr, int row, int columbn)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < columbn; j++)
		{
			arr[i][j] = (i + 1) * 10 + j;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}


//------------------TAsk9---------------------------------

void reverseColumbnArr(int** arr, int row, int columbn)
{
	int temp;
	int count = 0;
	for (int i = 0; i < row; i++)
	{
		count = 0;
		for (int j = 0; j < columbn; j++)
		{
			count++;
			if (count <= columbn / 2)
			{
				temp = arr[i][j];
				arr[i][j] = arr[i][columbn - count];
				arr[i][columbn - count] = temp;
			}
			
		}
	}
}

//---------------------TAsk10---------------------------------
void reverseRowArr(int**arr,int row,int columbn)
{
	int temp;
	for (int i = 0; i < row; i+=2)
	{
		for (int j = 0; j < columbn; j++)
		{
			temp = arr[i][j];
			arr[i][j] = arr[i+1][j];
			arr[i + 1][j] = temp;
		}
	}
}

