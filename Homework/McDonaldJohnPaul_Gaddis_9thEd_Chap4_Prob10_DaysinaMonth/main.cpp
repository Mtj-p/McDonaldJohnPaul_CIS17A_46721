/*
 * file: McDonaldJohnPaul_Gaddis_9thEd_Chap4_Prob10_Daysinamonth
 * Author: John-Paul McDonald
 * Date: 06/29/20
 * Purpose: Input a month, output the number of days
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions

//Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize Random Number Seed
    
    //Declare Variables
    int month=0;
    int year=0;
    
    
    //Initialize Variables
    
    //Process the inputs -> outputs
    cout<<"Enter a month (1-12): ";
    cin>>month;
    cout<<endl<<"Enter a year: ";
    cin>>year;
    //Display the results, verify inputs
    if(month>12||month<1){
        cout<<"invalid month"<<endl;
    }
    if(year<0){
        cout<<"invalid year"<<endl;
    }
    if(month==1){
        cout<<"31 days"<<endl;
    }
    if(month==3){
        cout<<"31 days"<<endl;
    }if(month==5){
        cout<<"31 days"<<endl;
    }if(month==7){
        cout<<"31 days"<<endl;
    }if(month==8){
        cout<<"31 days"<<endl;
    }if(month==10){
        cout<<"31 days"<<endl;
    }
    if(month==4){
        cout<<"30 days"<<endl;
    }if(month==6){
        cout<<"30 days"<<endl;
    }if(month==9){
        cout<<"30 days"<<endl;
    }if(month==11){
        cout<<"30 days"<<endl;
    }
    if(month==2){
        if(!(year%100)&&!(year%400)){
            cout<<"29 days"<<endl;
        }
        if(!(year%100)&&(year%400)){
            cout<<"28 days"<<endl;
        }
        if((year%100)){
            if(!(year%4)){
                cout<<"29 days"<<endl;
            }
        }
        if((year%4)){
            cout<<"28 days"<<endl;
        }
    }
        
    //Clean up and exit
    return 0;
}
