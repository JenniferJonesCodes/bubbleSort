/* 
 * File:   main.cpp
 * Author: Jen Jones
 *
 * Created on November 4, 2017, 6:36 PM
 */
// **********************************************
// COSC 501                               Lab 8_3           
// Jennifer Jones             DUE-DATE 11/8/2017
// PROGRAM-NAME: Sorting a string array
//***********************************************

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;
int SIZE=30;

void bubblesort(string arr[], int length){
    for (int i = SIZE - 1; i > 0; i--)
        for (int j = 0; j < i; j++)
            if (arr[j] > arr[j+1]){
                //swap values
                string temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
}

int printArray(string a[], int size){
    for (int i=0; i<size; i++)
    cout << a[i]<< ", ";
}

int main() {
    string fruits[SIZE];
    ifstream fileIn("fruits.txt");

    //file open failure   
    if (fileIn.fail()) {
        cout << "File open failure." << endl;
        exit(1);
    }
    //Fills array
    for (int i=0; i<30; i++)
        fileIn >> fruits[i];
    
    cout << "Before Sorting: " << endl;
    //prints array
    printArray(fruits, SIZE);
    cout << endl<< endl;

    cout << "After Sorting: " << endl;
    //bubblesort alphabetizes array
    bubblesort(fruits, SIZE);
    //prints array
    printArray(fruits, SIZE);

    return 0;
}