/* 
 * File:   main.cpp
 * Author: Mauricio S. Perez
 * Class:  CIS 17A [48130]
 * Purpose:Tony Gaddis: Starting out with c++ 6th
 *              Programming Challenges
 * Problem: 07.06 - Number Analysis Program
 * 
 *
 *Write a program that asks the user for a file name. Assume the file contains a series of
 *numbers, each written on a separate line. The program should read the contents of the
 *file into an array and then display the following data:
 *
 *• The lowest number in the array
 *• The highest number in the array
 *• The total of the numbers in the array
 *• The average of the numbers in the array
 *
 *The Student CD contains a text file named numbers.txt. that you can use to test the
 *program.
 * 
 * DISCLAMER:
 * I COULD NOT FIND THIS PROBLEM, SO I USED ANOTHER FILE WHERE MARK LEHR CREATED AN ARRAY
 * WHICH THEN CALLS THE ARRAY AND CALCULATES THE LOWEST, HIGHEST, AND TOTAL. I CREATED THE
 * AVARAGE BASED ON THE CODE.
 * I CHANGED SOME OF THE VARIABLES FROM INTS TO FLOATS AS TO GET A MORE ACCURATE READING FOR
 * THE AVERAGE OF THE SUM OF 10000 VALUES.
 * ORIGINAL CODE NAME: Writing to a File
 * 
 * Created on September 7, 2014, 5:28 PM
 */

/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Writing to a File
 * Created on December 1, 2011, 7:50 PM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <cstring>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
    //Initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables for problem loop
    bool problem=true; // For looping program
    char y=y;          //Input for looping program
    
    //Do loop for Problem 5
    do{ //do loop for re-running problem    
    
    //Read the name of the file
    const int SIZE=20;
    char fileName[SIZE];
    
    //Call for file name to use
    cout<<"Type in a file name to use"<<endl;
    cin.getline(fileName,SIZE);
    cout<<"You typed "<<fileName<<endl;
    
    //Fill this file with numbers
    ofstream output(fileName);
    float amountOfData=10000;
    for(int i=1;i<amountOfData;i++){
        output<<(rand()%90+10)<<endl;
    }
    output<<(rand()%90+10);
    
    //Close the file
    output.close();
    
    //Read in a file and analyze
    ifstream input(fileName);
    float data=0,min=0,max=0,avg=0;
    int total;
    input>>data;min=data;max=data;total=data;
    while(input>>data){
        if(min>data)min=data;        //MINIMUM SUM
        if(max<data)max=data;        //MAX SUM
        total+=data;                 //TOTAL SUM
    }
    
    //Average calculation
    avg=total/amountOfData;
    
    //Output Values
    cout<<setprecision(2)<<fixed;
    cout<<"The minimum value found = "<<min<<endl;
    cout<<"The maximum value found = "<<max<<endl;
    cout<<"The total of all values = "<<total<<endl;
    cout<<"The Average of "<<amountOfData<<" Values  = "<<avg<<endl;
    
        //run again prompt
    cout<<"Run P6: Ch07Prob06-Number Analysis Program Again?"<<endl;
    cout<<"Type 'y' followed by a space, followed by a desired file name to run, else to quit to menu selection:";
    cin>>y;
    
    //run again or terminate
    switch(y){
                case 'y':{
                    break;  //run again
                }//run problem again
                default:{
                        cout<<endl<<"**********************************************************"<<endl;
                        cout<<"    End of P6: Ch07Prob06-Number Analysis Program"<<endl;
                        cout<<"**********************************************************"<<endl<<endl;
                        problem=false;
                        break;
                }//break out of switch to loop problem
    }//end of switch y
    
    }while(problem);//will loop if problem = true
    return 0;
}

