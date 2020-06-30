/* 
 * File:Gaddis Ch2.5 Average of values
 * Author: McDonald, John-Paul
 * Date:06/25/20
 * Purpose: Match output format
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed Here
    
    //Declare all Variables Here
    float one,two,three,four,five,aveRage=0;
    //Input or initialize values Here
    cin>>one;
    cin>>two;
    cin>>three;
    cin>>four;
    cin>>five;
    //Process/Calculations Here
    aveRage=((one+two+three+four+five)/5);
    //Output Located Here
    cout<<"Input 5 numbers."<<endl;
    cout<<"The average is "<<aveRage;
    //Exit
    return 0;
}