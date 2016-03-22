/* 
 * File:   main.cpp
 * Author: Mauricio S. Perez
 * Class:  CIS 17A [48130]
 * Purpose:Tony Gaddis: Starting out with C++ 6th
 *                      Programming Challenges
 * Problem: 04.10 -  Software Sales
 * A software company sells a package that retails for $99. Quantity discounts are given
 * according to the following table.
 *
 * Quantity 	Discount
 * 10–19 		20%
 * 20–49 		30%
 * 50–99 		40%
 * 100 or more 	50%
 *
 * Write a program that asks for the number of units sold and computes the total cost of
 * the purchase.
 * Input Validation: Make sure the number of units is greater than 0.
 *
 * Created on September 3, 2014, 5:39 PM
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
        cout<<"      P3: Ch04Prob10-Software Sales"<<endl;
        cout<<"******************************************"<<endl<<endl;

    //declare problem for loop
    bool problem=false;
 do{
    //bool will be true to run loop of problem
    problem=true;
 {
    //Declare variables
    float value=99.00, d1=0.20, d2=0.30, d3=0.40, d4=0.50, total=0.00;
    int amount=0;
    char y=y;
    
    //Input Value of property
    cout<<"How many items are you buying: ";
    cin>>amount;
    //Output Number of Softwares
    cout<<"You have chosen to buy: "<<amount<<" softwares"<<endl;
    
    //Display if you qualify for a discount
    amount<10 ? cout<<"You do not qualify for a discount. Sorry...":
               cout<<"You qualify for a discount! ";
    
    //no discount
    if(amount<10){
        total=(amount*value);
    }
    //First discount: 10-19 items
    else if(amount>=10 && amount<=19){
        total=(amount*value)-((amount*value)*d1);
        cout<<" %20 ";
    }
    //Second Discount: 20-49 items
    else if(amount>=20 && amount<=49){
        total=(amount*value)-((amount*value)*d2);
        cout<<" %30 ";
    }
    //Third Discount: 50-99 items
    else if(amount>=50 && amount<=99){
        total=(amount*value)-((amount*value)*d3);
        cout<<" %40 ";
    }
    //Final Discount: 100+
    else if(amount>=100){
        total=(amount*value)-((amount*value)*d4);
        cout<<" %50 ";
    }
    
    //Display if you qualify for a discount
    amount<10 ? cout<<endl:
                cout<<"per item "<<endl;
    
    
    //TOTALS
    cout<<"----------------------------------------"<<endl;
    //Display total
    cout<<"Your total is: $"<<setprecision(2)<<fixed<<total<<endl;
 
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

