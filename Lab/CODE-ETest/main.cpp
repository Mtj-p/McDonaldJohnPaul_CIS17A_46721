/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Sorting a 2-D array of characters if row and columns match
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <cstring> //strlen(),strcmp(),strcpy()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;//Only 20 required, and 1 for null terminator

//Function Prototypes Here
int  read(char [][COLMAX],int &);//Outputs row and columns detected from input
void sort(char [][COLMAX],int,int);//Sort by row
void print(const char [][COLMAX],int,int);//Print the sorted 2-D array

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=30;             //Only 20 required
    char array[ROW][COLMAX];      //Bigger than necessary 
    int colIn,colDet,rowIn,rowDet;//Row, Col input and detected
    
    //Input the size of the array you are sorting
    cout<<"Read in a 2 dimensional array of characters and sort by Row"<<endl;
    cout<<"Input the number of rows <= 20"<<endl;
    cin>>rowIn;
    cout<<"Input the maximum number of columns <=20"<<endl;
    cin>>colIn;
    
    //Now read in the array of characters and determine it's size
    rowDet=rowIn;
    cout<<"Now input the array."<<endl;
    colDet=read(array,rowDet);
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size
    if(rowDet==rowIn&&colDet==colIn){
        sort(array,rowIn,colIn);
        cout<<"The Sorted Array"<<endl;
        print(array,rowIn,colIn);
    }else{
        if(rowDet!=rowIn)
        cout<<(rowDet<rowIn?"Row Input size less than specified.":
            "Row Input size greater than specified.")<<endl;
        if(colDet!=colIn)
        cout<<(colDet<colIn?"Column Input size less than specified.":
            "Column Input size greater than specified.")<<endl;
    }
    
    //Exit
    return 0;
}

int  read(char a[][COLMAX],int &b){
    string temp1;
    int temp2;
    for(int i=0;i<b;i++){
        cin>>temp1;
        temp2=temp1.length();
        if(temp2>0){
            for(int j=0;j<temp2;j++){
                a[j][i]=temp1[j];
            }
        }
    }
    return temp2;
    
}
void sort(char a[][COLMAX],int b,int c){
    for(int k=0;k<b;k++){
        for(int i=0; i<c-1;i++){
            for(int j=i+1;j<c;j++){
                if(a[k][i]>a[k][j]){
                    int temp=a[k][j];
                    a[k][j]=a[k][i];
                    a[k][i]=temp;
                    
                }
                
            }
        }
    }
    
    for(int l=0;l<b;l++){
        for(int m=l+1;m<b;m++){
            if(a[l][0]>a[m][0]){
                for(int o=0;o<c;o++){
                int temp2=a[l][o];
                cout<<temp2<<endl;
                a[l][o]=a[m][o];
                a[m][o]=temp2;
                }
            }
        }
    }
    
    
}
void print(const char arrPrnt[][COLMAX],int rowS,int colS){
    for(int i=0;i<rowS;i++){
       for(int j=0;j<colS;j++){
           cout<<arrPrnt[i][j];
       }
       cout<<endl;
    }
    
}
