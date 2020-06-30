/*
 * * file: McDonaldJohnPaul_Gaddis_9thEd_Chap5_Prob11_Population
 * Author: John-Paul McDonald
 * Date: 06/29/20
 * Purpose: Show growth of a population daily based on inputs
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
    float orgNum,avgDpi,numDays,strtPop;
     
   
    //Initialize Variables
    
    //Process the inputs -> outputs
    cout<<"This program will predict the size of a population of organisms."<<endl<<
            "First input the starting number of organisms (greater than 2): ";
    cin>>orgNum;
    strtPop=orgNum;
    if(orgNum<2){
        cout<<endl<<">>invalid number of organisms<<"<<endl;
    }
    cout<<endl<<"Average daily population increase % (positive number): ";
    cin>>avgDpi;
    if(avgDpi<0){
        cout<<endl<<">>invalid average daily population increase<<"<<endl;
    }
    cout<<endl<<"Number of days organisms have to multiple (greater than 1): ";
    cin>>numDays;
    if(numDays<1){
        cout<<endl<<">>invalid number of days<<"<<endl;
        
    }
    if(numDays>1){
        for(int i=0;i<=numDays;i++){
            cout<<"Population size day "<<i<<": ";
            float popDay;
            popDay=orgNum+(orgNum*(avgDpi/100));
            orgNum=popDay;
            cout<<orgNum<<endl;
        }
    }
    cout<<endl<<endl<<"Starting Population:   "<<strtPop<<endl;
    cout<<"Final Population:      "<<orgNum<<endl;
    
            
    //Display the results, verify inputs
    
    //Clean up and exit
    return 0;
}
