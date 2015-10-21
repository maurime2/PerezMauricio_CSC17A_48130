/* 
 * File:   main.cpp
 * Author: Mauricio S. Perez
 * Purpose:Assignment 1 & 2 09/2/14: 3 problems from Chapter 1-4 for Gaddis
 *                                   3 problems from Chapter 5-8 for Gaddis
 * Problem 1 -> Gaddis_Ch03Prob12-Bank Charges
 * Problem 2 -> Gaddis_Ch03Prob13-Property Tax
 * Problem 3 -> Gaddis_Ch04Prob10-Software Sales
 * Problem 4 -> Gaddis_Ch05Prob11-Population
 * Problem 5 -> Gaddis_Ch06Prob07-Celsius Temperature Table
 * Problem 6 -> Gaddis_Ch07Prob06-Number Analysis Program
 * Problem 7 -> Gaddis_Ch08Prob07-Binary String Search
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <fstream>
#include <cstring>

using namespace std;

//No Global Constants

//No Global Variables

//GLOBAL FUNCTIONS - Problem 5
float celsius(float, float);//function that will reverse the order of the input short
void fillArray(double[],int);
void printtable(double[],int);

int main(int argc, char** argv) {
    //General Menu Format
    bool loop=true, problem=false;
    do{
        //Display the selection
        cout<<"WARNING: FOR PROBLEM 6, TYPE '6' FOLLOWED BY A SPACE AND A DESIRED FILE NAME!!!"<<endl;
        cout<<"Type  1 to solve Ch03Prob12-Bank Charges: P1"<<endl;
        cout<<"Type  2 to solve Ch03Prob13-Property Tax: P2"<<endl;
        cout<<"Type  3 to solve Ch04Prob10-Software Sales: P3"<<endl;
        cout<<"Type  4 to solve Ch05Prob11-Population: P4"<<endl;
        cout<<"Type  5 to solve Ch06Prob07-Celsius Temperature Table: P5"<<endl;
        cout<<"Type  6 to solve Ch07Prob06-Number Analysis Program: P6"<<endl;
        cout<<"Type  7 to solve Ch08Prob07-Binary String Search: P7"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        char choice;
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){

        case '1':{//Problem 1

        //cout problem start
        cout<<"******************************************"<<endl;
        cout<<"      P1: Ch03Prob12-Bank Charges"<<endl;
        cout<<"******************************************"<<endl<<endl;
        problem=true;
        
do{
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
    cout<<"Run P1: Ch03Prob12-Bank Charges Again?"<<endl<<"Type 'y' to run, else to quit to menu selection:";
    cin>>y;
    
    //run again or terminate
    switch(y){
                case 'y':{
                    break;  //run again
                }//run problem again
                default:{
                        cout<<"******************************************"<<endl;
                        cout<<"    End of P1: Ch03Prob12-Bank Charges"<<endl;
                        cout<<"******************************************"<<endl<<endl;
                        problem=false;
                        break;
                }//break out of switch to loop problem
    }//end of switch y
 }//main brackets of problem
}while(problem);//will loop if problem = true
break;
        }//end of case 1
            
        case '2':{
            cout<<"******************************************"<<endl;
            cout<<"  Start of P2: Ch03Prob13-Property Tax"<<endl;
            cout<<"******************************************"<<endl;
            cout<<endl;
            cout<<endl;
            char y=y;
/* 
 * File:   main.cpp
 * Author: Mauricio S. Perez
 * Class:  CIS 17A [48130]
 * Purpose:Tony Gaddis: Starting out with c++ 6th
 *              Programming Challenges
 * Problem: 03.13 - Property Tax
 * 
 *13. Property Tax
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
do{
problem=true; //loops at the end and runs the problem again
{//main bracket starts here!!!!!!!!!!

    //cout problem start
        cout<<"******************************************"<<endl;
        cout<<"      P2: Ch03Prob13-Property Tax"<<endl;
        cout<<"******************************************"<<endl<<endl;
 
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
    cout<<"Run P2: Ch03Prob13-Property Tax Again?"<<endl<<"Type 'y' to run, else to quit to menu selection:";
    cin>>y;
            
    //run again or terminate
    switch(y){
        case 'y':{
            break;  //run again
        }//run problem again
        default:{
                cout<<"******************************************"<<endl;
                cout<<"End of P2: Ch03Prob13-Property Tax"<<endl;
                cout<<"******************************************"<<endl<<endl;
                problem=false;
                break;
        }//break out of switch to loop problem
     }//end of switch y
    }//end of main brackets! end of main HERE!!!!!!!!!!!!!!!!!!!!!!
}while(problem);//will loop if problem = true
        break;
        }//end of problem 2
    
        case '3':{
            cout<<"******************************************"<<endl;
            cout<<" Start of P3: Ch04Prob10-Software Sales"<<endl;
            cout<<"******************************************"<<endl;
            cout<<endl;
            cout<<endl;
            char y=y;
do{
problem=true; //loops at the end and runs the problem again
{//main bracket starts here!!!!!!!!!!    
    
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
    cout<<"Run P3: Ch04Prob10-Software Sales Again?"<<endl<<"Type 'y' to run, else to quit to menu selection:";
    cin>>y;
            
    //run again or terminate
    switch(y){
        case 'y':{
            break;  //run again
        }//run problem again
        default:{
                cout<<"******************************************"<<endl;
                cout<<"End of P3: Ch04Prob10-Software Sales"<<endl;
                cout<<"******************************************"<<endl<<endl;
                problem=false;
                break;
        }//break out of switch to loop problem
     }//end of switch y
    }//end of main brackets! end of main HERE!!!!!!!!!!!!!!!!!!!!!!
}while(problem);//will loop if problem = true
        break;
        }//end of problem 3
    
        case '4':{
            cout<<"******************************************"<<endl;
            cout<<"  Start of P4: Ch05Prob11-Population"<<endl;
            cout<<"******************************************"<<endl;
            cout<<endl;
            cout<<endl;
            char y=y;
            
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
do{
problem=true; //loops at the end and runs the problem again
{//main bracket starts here!!!!!!!!!!    
    
    //cout problem start
        cout<<"******************************************"<<endl;
        cout<<"      P4: Ch05Prob11 - Population"<<endl;
        cout<<"******************************************"<<endl<<endl;

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
    cout<<" Starting Population of "<<pop<<" with %"<< avg_g<<" growth"<<endl;
    cout<<"********************************************************"<<endl;
    
     //Output number of days.
    do{//Output population growth.        
    pop=(pop+(pop*avg_g*.01));
    cout<<"Day "<<day<<" Growth: "<<pop<<endl;
    day++;//increment day count (To output)
    days--;//Decriment days to loop:
    }while(days>0);//Loops if days is more than 1    
        
    //run again prompt
    cout<<"Run P4: Ch05Prob11-Population Again?"<<endl<<"Type 'y' to run, else to quit to menu selection:";
    cin>>y;
            
    //run again or terminate
    switch(y){
        case 'y':{
            break;  //run again
        }//run problem again
        default:{
                cout<<"******************************************"<<endl;
                cout<<"    End of P4: Ch05Prob11-Population"<<endl;
                cout<<"******************************************"<<endl<<endl;
                problem=false;
                break;
        }//break out of switch to loop problem
     }//end of switch y
    }//end of main brackets! end of main HERE!!!!!!!!!!!!!!!!!!!!!!
}while(problem);//will loop if problem = true
        break;
        }//end of problem 4
        
        case '5':{
            cout<<"***************************************************"<<endl;
            cout<<" Start of P5: Ch06Prob07-Celsius Temperature Table"<<endl;
            cout<<"***************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            char y=y;
            
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
            
do{
problem=true; //loops at the end and runs the problem again
//{//main bracket starts here!!!!!!!!!!    
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
    cout<<"Run P5: Ch06Prob07-Celsius Temperature Table Again?"<<endl<<"Type 'y' to run, else to quit to menu selection:";
    cin>>y;
            
    //run again or terminate
    switch(y){
        case 'y':{
            break;  //run again
        }//run problem again
        default:{
                cout<<"************************************************"<<endl;
                cout<<" End of P5: Ch06Prob07-Celsius Temperature Table"<<endl;
                cout<<"************************************************"<<endl<<endl;
                problem=false;
                break;
        }//break out of switch to loop problem
     }//end of switch y
    //}//end of main brackets! end of main HERE!!!!!!!!!!!!!!!!!!!!!!
}while(problem);//will loop if problem = true
        break;
        }//end of problem 5
        
        
        case '6':{
            cout<<"******************************************"<<endl;
            cout<<" P6: Ch07Prob06-Number Analysis Program"<<endl;
            cout<<"******************************************"<<endl;
            cout<<endl;
            cout<<endl;
            char y=y;
            
            //Initialize the random number generator
            srand(static_cast<unsigned int>(time(0)));
do{
problem=true; //loops at the end and runs the problem again
//{//main bracket starts here!!!!!!!!!!    
    

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
    //}//end of main brackets! end of main HERE!!!!!!!!!!!!!!!!!!!!!!
}while(problem);//will loop if problem = true
        break;
        }//end of problem 6
        
        case '7':{
            cout<<"******************************************"<<endl;
            cout<<"   P7: Ch08Prob07-Binary String Search"<<endl;
            cout<<"******************************************"<<endl;
            cout<<endl;
            cout<<endl;
            char y=y;
do{
problem=true; //loops at the end and runs the problem again
//{//main bracket starts here!!!!!!!!!!    
    
    
    //run again prompt
    cout<<"Run Problem 7 Again? Type 'y' to run, else to quit to menu selection:";
    cin>>y;
            
    //run again or terminate
    switch(y){
        case 'y':{
            break;  //run again
        }//run problem again
        default:{
                cout<<"******************************************"<<endl;
                cout<<"End of P7: Ch08Prob07-Binary String Search"<<endl;
                cout<<"******************************************"<<endl<<endl;
                problem=false;
                break;
        }//break out of switch to loop problem
     }//end of switch y
    //}//end of main brackets! end of main HERE!!!!!!!!!!!!!!!!!!!!!!
}while(problem);//will loop if problem = true
        break;
        }//end of problem 7
        
        default:{
            cout<<"******************************************"<<endl;
            cout<<"         Program Terminated"<<endl;
            cout<<"******************************************"<<endl<<endl;
            loop=false;
            break;
        }//end of menu loop
        
    };
    }while(loop);//Upper do-while
    return 0;
}

                //GLOBAL FUNCTIONS FOR PROBLEM 5
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