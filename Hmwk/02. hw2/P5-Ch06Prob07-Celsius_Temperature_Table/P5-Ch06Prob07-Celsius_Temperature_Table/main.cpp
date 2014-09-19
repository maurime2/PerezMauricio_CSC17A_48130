/* 
 * File:   main.cpp
 * Author: Mauricio S. Perez
 * Class:  CIS 17A [48130]
 * Purpose:Tony Gaddis: Starting out with c++ 6th
 *              Programming Challenges
 * Problem: 06.07 - Celsius Temperature Table
 * 
 *	C = 5/9 * ( F - 32 )
 *
 *The formula for converting a temperature from Fahrenheit to Celsius is ABOVE.
 *F is the Fahrenheit temperature and C is the Celsius temperature. 
 * - Write a function named "celsius" that accepts a Fahrenheit temperature as an argument. 
 * - The function should return the temperature, converted to Celsius. 
 * 
 * -Demonstrate the function by calling it in a loop that displays a table of the Fahrenheit temperatures 0 through 20
 *  and their Celsius equivalents.
 * 
 * Created on September 4, 2014, 5:02 PM
 */

//Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

//No Global Constants

//No Global Variables

//GLOBAL FUNCTIONS - Problem 6
float celsius(float, float);//function that will reverse the order of the input short
void fillArray(double[],int);
void printtable(double[],int);

//Execute Program
int main()
{
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables for problem loop
    bool problem=true; // For looping program
    char y=y;          //Input for looping program
    
    
    
    //Do loop for Problem 5
    do{ //do loop for re-running problem
    
    //Declare variables
    float input=0;          //Used to store the input that will be passed in
    float value=0;          //Value will store Temperature in Fahrenheit, as to not change temp
    float temp=0, temp2=0;  //Value that will store Fahrenheit and Celcius temp's respectively
    int SIZE=20, count=0; //for array that will hold temps 0 to 20 
    double array[SIZE]; //Array
    
                //array fill test
                //    array[1]=1.14;
                //    array[2]=2.15;
                //    array[3]=3.14;
                //    array[4]=4.14;
                //    array[5]=5.14;
                //    array[6]=6.14;
                //    array[7]=7.14;
                //    array[8]=8.14;
                //    array[9]=9.14;
                //    array[10]=10.14;
                //    array[11]=11.14;
                //    array[12]=12.14;
                //    array[13]=13.14;
                //    array[14]=14.14;
                //    array[15]=15.14;
                //    array[16]=16.14;
                //    array[17]=17.14;
                //    array[18]=18.14;
                //    array[19]=19.14;
                //    array[20]=20.15;
    
    //Prompt for input in Fahrenheit
    do{
        cout<<"Input a Temperature (in Fahrenheit): ";  //prompt for input
        if(cin>>temp)                                   //Input short - will pass if a value is put in
        {//pass to range check
        }
        else{                                                   //else will prompt error (input not a not a value)
            cout<<"Incorrect Input: Please try again!!!"<<endl; //prompt error
            input=-1;                                           //place a value of -1 into input so it will loop back to prompt
        }
    }while(temp<0 or temp>65535);

    //store Input into Unsigned short "value"
    value=temp;                                             //stores Fahrenheit value into temp as to not change Fahrenheit value
    
                //test out of loop Before Change
                //cout<<"Out of loop Fahrenheit: "<<value<<" F"<<endl;
                //cout<<"Out of loop Celsius   : "<<temp2<<" C"<<endl<<endl;
        
    //Pass value through reverse function
    temp2 = celsius(value, temp2);
                //test for change in temp2 after array change: 
                //cout<<temp2<<"<--"<<endl;
    
                //test out of loop: After Change
                //cout<<endl<<"Out of loop after F: "<<value<<" F"<<endl;
                //cout<<"Out of loop after C: "<<temp2<<" C"<<endl<<endl;
    
    //Fill array for temp table 0-20
    fillArray(array,SIZE);
    
                //test output
                //cout<<array[1]<<endl<<array[20]<<endl;
    
    //Print Table
    printtable(array,SIZE);
            
    //run again prompt
    cout<<"Run Problem 5 Again? Type 'y' to run, else to quit to menu selection:";
    cin>>y;
    
    //run again or terminate
    switch(y){
                case 'y':{
                    break;  //run again
                }//run problem again
                default:{
                        cout<<endl<<"**********************************************************"<<endl;
                        cout<<"    End of P5: Ch06Prob07-Celsius Temperature Table"<<endl;
                        cout<<"**********************************************************"<<endl<<endl;
                        problem=false;
                        break;
                }//break out of switch to loop problem
    }//end of switch y
    
    }while(problem);//will loop if problem = true
        //Exit Stage Right
        return 0;
}

float celsius(float value, float temp2){
    float valueR;
    
    //Print Values
    cout<< "You have Entered In Fahrenheit: "<<setprecision(2)<<fixed<<value<<" F"<<endl;
    
    temp2=((value-32)*5)/9;
    
    //
    cout<< "Celsius Temperature = : "<<temp2<<" C"<<endl; // C = 5/9 * ( F - 32 )
    return temp2;
    //Back to Main
}

void fillArray(double array[],int count){
                //cout<<"inside array: -->>"<<endl; //TEST - PROVES YOU ARE INSIDE ARRAY
    int i=0;
                //cout<<"Count: "<<count<<endl;//TEST INITIAL COUNT
    
    //Fill
    do{ 
        //cout<<i<<"-->"; //TEST WHAT COUNT TURNS INTO
        i++;
        //cout<<i<<endl;// TEST - ALOND WITH TEST 2 LINES BACK, WILL SHOW WHAT I TURNS INTO
        array[i]=i;
        //cout<<array[i]<<"<--"<<i<<endl;//TEST PRINTED VALUE OF ARRAY AND WHAT IS BEING STORED INTO IT
        //for(int j=1;j<=12;j++){
            //a[i]+=(1.0*rand()/maxInt-0.5);
        //}
    }while(i<count);
}

void printtable(double array[],int count){
    cout<<"***************************"<<endl;
    cout<<"   Table of Temperature"<<endl;
    cout<<"***************************"<<endl;
    cout<<"    Fahrenheit"<<"  Celsius"<<endl;
    int i=0;
    
    //Do-While loop will print table
    do{ 
        i++;
        cout<<"     "<<array[i]<<"F ---> "<<((array[i]-32)*5)/9<<"C"<<endl;
        array[i]=i;
    }while(i<count);
    cout<<"***************************"<<endl;
    cout<<"        End of Table"<<endl;
    cout<<"***************************"<<endl;
}