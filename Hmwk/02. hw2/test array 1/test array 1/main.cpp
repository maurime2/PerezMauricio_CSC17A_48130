/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Writing to a File
 * Created on December 1, 2011, 7:50 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
    //Initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Read the name of the file
    const int SIZE=20;
    char fileName[SIZE];
    cout<<"Type in a file name to use"<<endl;
    cin.getline(fileName,SIZE);
    cout<<"You typed "<<fileName<<endl;
    //Fill this file with numbers
    ofstream output(fileName);
    int amountOfData=10000;
    for(int i=1;i<amountOfData;i++){
        output<<(rand()%90+10)<<endl;
    }
    output<<(rand()%90+10);
    //Close the file
    output.close();
    
    //Read in a file and analyze
    ifstream input(fileName);
    short data,min,max;
    int total;
    input>>data;min=data;max=data;total=data;
    while(input>>data){
        if(min>data)min=data;
        if(max<data)max=data;
        total+=data;
    }
    cout<<"The minimum value found ="<<min<<endl;
    cout<<"The maximum value found ="<<max<<endl;
    cout<<"The total of all values ="<<total<<endl;
    return 0;
}

