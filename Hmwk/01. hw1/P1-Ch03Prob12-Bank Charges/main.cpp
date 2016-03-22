/* 
 * File:   main.cpp
 * Author: Mauricio S. Perez
 * Class:  CIS 17A [48130]
 * Purpose:Tony Gaddis: Starting out with c++ 6th
 *              Programming Challenges
 * Problem: 03.12 - Bank Charges
 * 
 * A bank charges $10 per month plus the following check fees for a commercial
 * checking account:
 *          $0.10 each for fewer than 20 checks
 *          $0.08 each for 20–39 checks
 *          $0.06 each for 40–59 checks
 *          $0.04 each for 60 or more checks
 * 
 * 
 * - The bank also charges an extra $15 if the balance of the account falls 
 *   below $400 (before any check fees are applied). 
 * 
 * Write a program that asks for the beginning balance
 * Number of checks written. 
 * Compute and display the bank’s service fees for the month.
 * 
 * Input Validation: 
 *  -Do not accept a negative value for the number of checks written. 
 *  -If a negative value is given for the beginning balance, display an urgent
 *   message indicating the account is overdrawn.
 *
 * Created on September 2, 2014, 2:30 PM
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
        cout<<"      P1: Ch03Prob12-Bank Charges"<<endl;
        cout<<"******************************************"<<endl<<endl;

    //declare problem for loop
    bool problem=false;
 do{
    //bool will be true to run loop of problem
    problem=true;
 {
    //Declare variables
    float  account=0.00;
    int checks=0;
    char y=y;
    
    //Amount in Account
    cout<<"What is the amount of your account?: ";
    cin>>account;
    
    //Number of checks Written
    cout<<"How many checks were written this month?: ";
    cin>>checks;
    
    //Check for overdraw and display amount in account
    account<0 ? cout<<"YOUR ACCOUNT IS OVERDRAWN"<<endl<<"Their is "<<setprecision(2)<<fixed<<"$"<<account<<" in your account."<<endl:
                cout<<"There is "<<setprecision(2)<<fixed<<"$"<<account<<" in your account."<<endl;

    //Check for checks and display amount written
    checks<0 ? cout<<"YOU CANNOT WRIGHT NEGATIVE CHECKS!!!"<<endl<<"You Wrote: "<<checks<<" This month."<<endl:
               cout<<"You wrote: "<<checks<<" checks this month."<<endl<<endl;
    
    //if account below 400, add $15 fee
    if(account<400){
        cout<<"a $15 dollar fee will be added to your account.";
        account=account-15;
    }
    else{
        cout<<"Your account has $"<<setprecision(2)<<fixed<<account<<" in funds."<<endl;
        cout<<"Minimum balance fee waved. "<<endl;
    }
    
    //Check Fees
    cout<<"A $10 Checking Fee will now be applied to your account."<<endl;
    account=account-10;
    cout<<"Your account is now: $"<<setprecision(2)<<fixed<<account<<endl<<endl;

    //Zero Checks Written
    checks>0 ? cout<<"In addition, a fee for "<<checks<<" checks will now be applied."<<endl:
               cout<<"No extra check fees for this month."<<endl;
    //$0.10 each for fewer than 20 checks
    if(0<checks && checks<20){
        cout<<"$0.10 will be added to your account per check."<<endl;
        account=account-(.10*checks);
        }
    //$0.08 each for 20–39 checks
    else if(20<=checks && checks<=39 ){
        cout<<"$0.08 will be added to your account per check."<<endl;
        account=account-(.08*checks);
        }    
    //$0.06 each for 40–59 checks
     else if(40<=checks && checks<=59 ){
        cout<<"$0.06 will be added to your account per check."<<endl;
        account=account-(.06*checks);
        }
    //$0.04 each for 60 or more checks 
     else if(60<=checks){
        cout<<"$0.04 will be added to your account per check."<<endl;
        account=account-(.04*checks);
        }
    
    //Final amount in "account" after all the fees are applied.
    cout<<"After fees, your account balance is: $"<<setprecision(2)<<fixed<<account<<endl<<endl;
    
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

