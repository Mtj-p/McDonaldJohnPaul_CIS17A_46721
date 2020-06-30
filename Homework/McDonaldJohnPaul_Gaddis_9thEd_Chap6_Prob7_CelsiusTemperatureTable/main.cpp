/*
 * file: McDonaldJohnPaul_Gaddis_9thEd_Chap6_Prob7_CelsiusTemperatureTable
 * Author: John-Paul McDonald
 * Date: 06/29/20
 * Purpose: Converting from Fahrenheit to Celsius 0-20 Table
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions

//Prototypes
float celSius(float);


//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize Random Number Seed
    
    //Declare Variables
    
    //Initialize Variables
    float ceLs,feHr=0;
    
    //Process the inputs -> outputs
    
    //Display the results, verify inputs
    for(int i=0;i<21;i++){
        feHr=i;
        ceLs = celSius(feHr);
        cout.precision(4);
        cout<<"Fahrenheit: "<<feHr<<" Celsius: "<<ceLs<<endl;
    }
    //Clean up and exit
    return 0;
}


float celSius(float a){
    float b=0;
    b=a-32;
    b=b*5;
    b=b/9;
    return b;
}