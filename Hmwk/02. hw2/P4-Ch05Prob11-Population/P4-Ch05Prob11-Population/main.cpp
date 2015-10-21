/* 
 * File:   main.cpp
 * Author: Mauricio S. Perez
 * Class:  CIS 17A [48130]
 * Purpose:Tony Gaddis: Starting out with c++ 6th
 *              Programming Challenges
 * Problem: 05.11 - Population
 *
 * Write a program that will predict the size of a population of organisms.
 * - The program should ask the user for the starting number of organisms.
 * - Their average daily population increase (as a percentage).
 * - The number of days they will multiply.
 * - A loop should display the size of the population for each day.
 *
 * Input Validation:
 * - Do not accept a number less than 2 for the starting size of the population.
 * - Do not accept a negative number for average daily population increase.
 * - Do not accept a number less than 1 for the number of days they will multiply.
 *
 * Created on September 4, 2014, 3:25 PM
 */

//libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
using namespace std;

//No Global Variables

//Execute Program
int main()
{   
    //cout problem start
        cout<<"******************************************"<<endl;
        cout<<"      P4: Ch05Prob11 - Population"<<endl;
        cout<<"******************************************"<<endl<<endl;

    //declare problem for loop
    bool problem=false;
 do{//do loop will loop back to start of the problem...
    //bool will be true to run loop of problem
    problem=true;
    {
    //Declare variables
    float  pop=0.00, avg_g=0.00, days=0.00;
    int day=1;
    
    char y=y;
    
    //Input Population
    do{//pop loop for input        
    cout<<"What is the starting size of the population?: ";
    cin>>pop;                                                                                   //Input Population
    pop<2 ? cout<<"You need to enter a value greater than 1 for starting population..."<<endl:  //Output Pop Check
            cout<<"The starting population is: "<<setprecision(2)<<fixed<<pop<<endl;
    }while(pop<2);//Loops if pop is less than 2
    
    //Input Average Growth
    do{//Growth Loop for input        
    cout<<"What is the Average Growth Percentage of the population?: %";
    cin>>avg_g;                                                                        //Input AVG Growth
    avg_g<0 ? cout<<"You cannot enter a negative value for Average Growth..."<<endl:  //Output AVG Growth
              cout<<"The Average Growth is: %"<<setprecision(2)<<fixed<<avg_g<<endl;
    }while(avg_g<0);//Loops if avg_g is less than 0
    
    //Input Number of Days
    do{//Number of Days Loop for input        
    cout<<"How many Days will the population grow?: ";
    cin>>days;                                                                        //Input days
    days<1 ? cout<<"You cannot enter a value less than 1 for Days the population will grow..."<<endl:  //Output days
              cout<<"The population will grow for: "<<setprecision(2)<<fixed<<days<<" days."<<endl;
    }while(days<1);//Loops if days is less than 1    
    
    //Output Marquee to set up days that will be looped.
    cout<<endl<<"********************************************************"<<endl;
    cout<<" Starting Population of "<<pop<<" with %"<< avg_g<<"growth"<<endl;
    cout<<"********************************************************"<<endl;
    
     //Output number of days.
    do{//Output population growth.        
    pop=(pop+(pop*avg_g*.01));
    cout<<"Day "<<day<<" Growth: "<<pop<<endl;
    day++;//increment day count (To output)
    days--;//Decriment days to loop:
    }while(days>0);//Loops if days is more than 1    
    
    
    //run again prompt
    cout<<"Run Problem Again? Type 'y' to run, else to quit to menu selection:";
    cin>>y;
    
    //run again or terminate
    switch(y){
                case 'y':{
                    break;  //run again
                }//run problem again
                default:{
                        cout<<"******************************************"<<endl;
                        cout<<"End of P4: Ch05Prob11 - Population"<<endl;
                        cout<<"******************************************"<<endl<<endl;
                        problem=false;
                        break;
                }//break out of switch to loop problem
    }//end of switch y
 }//main brackets of problem
}while(problem);//will loop if problem = true       //exit stage right
 return 0;
}