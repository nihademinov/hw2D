#pragma once

int** CreatArr(int row, int columbn);

void FillArr(int** arr, int row, int columbn, int min, int max);

void PrintArr(int** arr, int row, int columbn);

//--------------TASK1-----------------------
int sumAllArr(int** arr, int row, int columbn);
//----------------------------------------------
//-------------Task2---------------------------
int sumDioganalsArr(int** arr, int row, int columbn);
//-----------------------------------------------
//-------------TAsk3-----------------------------
int MinNumArr(int** arr, int row, int columbn);
int MaxNumArr(int** arr, int row, int columbn);
//---------------------------------------------
//--------TASK4------------------------------
int ZeroCountInArr(int** arr, int row, int columbn);
int PositiveCountInArr(int** arr, int row, int columbn);
int NegativeCountInArr(int** arr, int row, int columbn);
//----------------------------------------------
//---------TASk5--------------------------------
void sumLineArr(int** arr, int row, int columbn);
//-------------------------------------------------
//--------------TASK6-------------------------------
void sumColumbnArr(int** arr, int row, int columbn);
//------------------------------------------------------
//-------------TASK7-----------------------------------------
void SumPositiveLineArr(int** arr, int row, int columbn);
//------------------------------------------------------------
//------------------TASk8------------------------------------
void fillArrLineNUm(int** arr, int row, int columbn);
//-----------------------------------------------------
//-------------------TASk9---------------------------
void reverseColumbnArr(int** arr, int row, int columbn);
//-------------------------------------------------
//---------------TASK10------------------------------
void reverseRowArr(int** arr, int row, int columbn);