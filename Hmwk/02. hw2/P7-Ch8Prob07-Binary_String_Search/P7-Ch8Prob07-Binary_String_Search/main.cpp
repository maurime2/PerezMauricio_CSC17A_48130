/* 
 * File:   main.cpp
 * Author: Mauri D830
 * 
 * P7: Ch08Prob07- - Binary String Search
 *
 * Modify the binarySearch function presented in this chapter so it searches an array
 * of strings instead of an array of ints.
 * 
 * Test the function with a driver program. 
 * 
 * Use Program 8-8 as a skeleton to complete. (The array must be sorted before the binary
 * search will work.)
 *
 *  #include <iostream>
 *  using namespace std;
 *
 *  int main()
 *
 *  {
 *	const int NUM_NAMES = 20, SIZE = 17;
 *	char names[NUM_NAMES][SIZE] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
 *			"Griffin, Jim", "Stamey, Marty", "Rose, Geri",
 *			"Taylor, Terri", "Johnson, Jill",
 *			"Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
 *			"James, Jean", "Weaver, Jim", "Pore, Bob",
 *			"Rutherford, Greg", "Javens, Renee",
 *			"Harrison, Rose", "Setzer, Cathy",
 *			 "Pike, Gordon", "Holland, Beth" };
 *
 *                  // Insert your code to complete this program
 *
 *                  return 0;
 *
 *   }
 *
 * Created on September 7, 2014, 10:22 PM
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

//No Global Constants

//No Global Variables

//Global Functions
//void markSort(char [],int);

int main(int argc, char** argv)

{
    //Declare Variables
    const int NUM_NAMES = 20, SIZE = 17;//number of names with character size
    bool sort=true;                     //for sort loop
    char fileName[SIZE]; 
    int doL=0;
    string swap;    //Filename with its size and a swap char with its size
    char temp[NUM_NAMES][SIZE];
    
	//fill with names
	char names[NUM_NAMES][SIZE] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
			"Griffin, Jim", "Stamey, Marty", "Rose, Geri",
			"Taylor, Terri", "Johnson, Jill",
			"Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
			"James, Jean", "Weaver, Jim", "Pore, Bob",
			"Rutherford, Greg", "Javens, Renee",
			"Harrison, Rose", "Setzer, Cathy",
			"Pike, Gordon", "Holland, Beth" };

        
        
return 0;    
        
    //Call for file name to use
    cout<<"Type in a file name to use"<<endl;
    cin.getline(fileName,SIZE);
    cout<<"You typed "<<fileName<<endl;

    //Fill this file with names
    ofstream output(fileName);
    float amountOfData=NUM_NAMES;
    for(int i=0;i<amountOfData;i++){
        output<<names[i]<<endl;
    }
    
    //Close the file
    output.close();
    
    
    
    
    
    
    
    //sort array
    //markSort(char names,SIZE);
    
   
    
    cout<<names[0]<<endl;
    cout<<names[1]<<endl;
    cout<<names[19]<<endl;


return 0;

}


//Global Functions
//void markSort(char a[],int n){
//    for(int i=0;i<n-1;i++){
//        
//    }
//}

//
//char sortArray(char &names[][SIZE_G]){
//    
//    
//    
//    return 0;
//}