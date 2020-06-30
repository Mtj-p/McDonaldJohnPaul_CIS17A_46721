/*
 * file: McDonaldJohnPaul_Gaddis_9thEd_Chap8_Prob7_BinaryStringSearch
 * Author: John-Paul McDonald
 * Date: 06/29/20
 * Purpose: Sort and search the given string array and allow users to search for the
 * position of a literal within the string array
 */

//System Libraries
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//User Libraries

//Global Constants
//Universal Math, Physics, Conversions, Higher Dimensions

//Prototypes
bool binarySearch(string [], int, string);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize Random Number Seed
    
    //Declare Variables
    const int NUM_NAMES = 20;
    
    string srchName;
    
    string names[NUM_NAMES] = {"Collins, Bill","Smith, Bart","Allen, Jim",
                                "Griffin, Jim","Stamey, Marty","Rose, Geri",
                                "Taylor, Terri","Johnson, Jill",
                                "Allison, Jeff","Looney, Joe","Wolfe, Bill",
                                "James, Jean","Weaver, Jim","Pore, Bob",
                                "Rutherford, Greg","Javens, Renee",
                                "Harrison, Rose","Setzer, Cathy",
                                "Pike, Gordon","Holland, Beth"};
    
    sort(begin(names),end(names));
    cout<<"Input a name from this list: "<<endl;
    for(auto n:names){
        cout << n << endl;
    }
    cout<<endl<<endl<<endl<<"Name: ";
    getline (cin,srchName);
    cout<<"You input: "<<srchName<<endl;
    
    if(binarySearch(names,NUM_NAMES,srchName)){
        true;
    }
    
    
           
    //Initialize Variables
    
    //Process the inputs -> outputs
    
    //Display the results, verify inputs
    
    //Clean up and exit
    return 0;
}



bool binarySearch(string array[], int numElems, string value){
    int first = 0;
    int last = numElems-1;
    int middle;
    int position=-1;
    bool found = false;
    do{ 
        middle = ((first + last)/2);
        
        if (array[middle]==value){
            cout<<value<<" was found at position: "<<middle;
            return true;
        }
        if(array[middle]>value){
            last = (middle-1);
            
        }
        else{
            first=(middle+1);
            
        }
        
    }while(!found);
    return found;
}
 