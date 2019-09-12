/*
 * File pp7f.cpp
 * Sean Ottaway 
 * this program sorts the elements in array
*/
#include <iostream>
#include <math.h>

using namespace std;

const int ELEMENT_SLOTS = 8; //declare global variable for element count

void sort(double*, int);//function prototype for sorting
void print(double*, int);//function prototype for output
int main(){

	double mArray[ELEMENT_SLOTS];
	int x(0);
	//loop control variable prompts for initial input
	cout << "Enter number: ";
	cin >> mArray[x];
	// start while loop for array input
	while(x < ELEMENT_SLOTS){
		x++;
		if(x == ELEMENT_SLOTS){
			break;
		}
	
		cout << "Enter number: ";
		cin >> mArray[x];
	}
	//call functions 
	sort(mArray,x);
	print(mArray,x);
	return 0;
}
/*
 * Function takes array elements and sorts them least to greatest 
 * returns nothing to main
*/
void sort(double *mArray, int x){

	int minIndex = 0;
	double temp = 0;
	for(int top = 0; top < x-1;top++){
		
		minIndex = top;
		for(int i = top +1;i < x; i++){
			if(mArray[minIndex] > mArray[i]){
				minIndex = i;
			}
		}
		//swap 
		temp = mArray[top];
		mArray[top] = mArray[minIndex];
		mArray[minIndex] = temp;	
	}
	
}
/*
 * function outputs results to user organized
 * returns nothing to main 
*/
void print(double *mArray, int x){

	for(int i =0;i<x;i++){
		cout << mArray[i] << endl;
	}
}
