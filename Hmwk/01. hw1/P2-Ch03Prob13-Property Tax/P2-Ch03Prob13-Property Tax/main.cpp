/* 
 * File:   main.cpp
 * Author: Mauricio S. Perez
 * Class:  CIS 17A [48130]
 * Purpose:Tony Gaddis: Starting out with c++ 6th
 *              Programming Challenges
 * Problem: 03.13 - Property Tax
 * 
 * 03.13 - Property Tax
 * A county collects property taxes on the assessment value of property
 * Assessment value of property = 60 percent of the property’s actual value. 
 * 
 * If an acre of land is valued at $10,000, its assessment value is $6,000.
 * The property tax is then 64¢ for each $100 of the assessment value. 
 * 
 * The tax for the acre assessed at $6,000 will be $38.40. 
 * 
 * Write a program that:
 * - asks for the actual value of a piece of property 
 * - displays the assessment value and property tax.
 *
 * Created on September 3, 2014, 4:51 PM
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
        cout<<"      P2: Ch03Prob13-Property Tax"<<endl;
        cout<<"******************************************"<<endl<<endl;

    //declare problem for loop
    bool problem=false;
 do{
    //bool will be true to run loop of problem
    problem=true;
 {
    //Declare variables
    float  value=0.00, a_value=0.00, tax=0.00;
    char y=y;
    
    //Input Value of property
    cout<<"Input the value of your property: $";
    cin>>value;
    a_value=(value*.6);             //Calculate Assessment Value
    tax=a_value*.01*.64;            //Calculate tax of Assessment Value
    
    //Output property value
    cout<<"Your Value of your property is:           $"<<setprecision(2)<<fixed<<value<<endl;
    //Output Estimated Value
    cout<<"The Assessment Value of your property is: $"<<setprecision(2)<<fixed<<a_value<<endl;
    //Output TAX
    cout<<"The tax from Assessment Value is:         $"<<setprecision(2)<<fixed<<tax<<endl;
    
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
                        cout<<"End of P1: Ch03Prob12-Bank Charges"<<endl;
                        cout<<"******************************************"<<endl<<endl;
                        problem=false;
                        break;
                }//break out of switch to loop problem
    }//end of switch y
 }//main brackets of problem
}while(problem);//will loop if problem = true       //exit stage right
        return 0;
}

