/*
 * file: McDonaldJohnPaul_Gaddis_9thEd_Chap3_Prob12_CelsiustoFahrenheit
 * Author: John-Paul McDonald
 * Date: 06/24/2020
 * Purpose: Convert Celsius to Fahrenheit
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
    /*
     * The given formula for Celsius temperatures to Fahrenheit temperatures is
     * F = (9/5)C + 32
     */
    //Declare Variables
    float farHeit,celSius;
    
    //Initialize Variables
    
    //Process the inputs -> outputs
    
    //Display the results, verify inputs
    for(int i=0;i<=100;i++){
        celSius=i;//intializing each row with a round number celsius
        farHeit=((9*celSius)/5)+32;
        //farHeit=farHeit+32;
               
        cout<<"Celsius: "<<setw(3)<<celSius<<setw(20)<<"Fahrenheit: "<<farHeit<<endl;
    }
    //Clean up and exit
    return 0;
}
