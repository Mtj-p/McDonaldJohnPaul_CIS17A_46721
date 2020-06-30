/*
 * file: McDonaldJohnPaul_Gaddis_9thEd_Chap3_Prob13_Currency
 * Author: John-Paul McDonald
 * Date: 06/29/20
 * Purpose: Create a table to convert dollars to yen/euros
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions

//Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize Random Number Seed
    
    //Declare Variables
    
    const float YEN_PER_DOLLAR = 98.93;
    const float EUROS_PER_DOLLAR = .74;
    int count = 50;//upper-limit on conversion calculator for purpose of creating table
    float dolConv = 0.00; //dollar conversion : enter dollar amount for conversion
    cout<<"Conversion Table for Whole Dollars"<<endl;  
             
    for(float i=dolConv; i<count;i++){

        if(i<10){
            cout.precision(3);
            cout<<"Dollar: $ "<<showpoint<<i<<setw(10);
        }else{
            cout.precision(4);               
            cout<<"Dollar: $ "<<showpoint<<i<<setw(9);
        }

        if(i<2){
            cout.precision(4);
            cout<<"Yen: ¥"<<(i*YEN_PER_DOLLAR)<<setw(14);
        }
        if(i>=2&&i<=10){
            cout.precision(5);
            cout<<"Yen: ¥"<<(i*YEN_PER_DOLLAR)<<setw(13);
        }
        if(i>10){
            cout.precision(6);
            cout<<"Yen: ¥"<<(i*YEN_PER_DOLLAR)<<setw(12);
        }



        if(i<=1){
            cout.precision(2);
            cout<<"Euros: €"<<(i*EUROS_PER_DOLLAR)<<endl;
        }
        if(i>1&&i<14){
            cout.precision(3);
            cout<<"Euros: €"<<(i*EUROS_PER_DOLLAR)<<endl;
        }
        if(i>=14){
            (cout.precision(4));
            cout<<"Euros: €"<<(i*EUROS_PER_DOLLAR)<<endl;
        }

    }
    //Initialize Variables
    
    //Process the inputs -> outputs
    
    //Display the results, verify inputs
    
    //Clean up and exit
    return 0;
}
