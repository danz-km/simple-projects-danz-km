//https://www.javatpoint.com/currency-converter-in-cpp
//A simple currency converter from Javatpoint

//include the iostream library
#include <iostream>

//using the standard namespace to declare the scope of variables we are
//going to use
using namespace std;

//declaring our main variable that will 
//return 0
int main() {

//in this driver program
//the currency we are going to use is the dollar
//therefore, let's assign a float variable
//called usd
float usd;

//next, let's declare other float variables 
//of other currencies rates we're
//going to use to calculate

//british pound sterling rate
//1 bps is equivalent to 1.487 usd
float bps = (1/1.487);

//so on and so forth
float frnc = (1/0.172);
float dstchmrk = (1/0.584);
float yen = (1/0.00955);
float ind = (1/0.013);

//let's create the prompt
//for the input
cout<<"Please enter the amount you would like to convert in USD: ";
cin>>usd;

//let's create the outputs 
//to calculate the conversion after 
//the user inputs

cout<<"British Pound: "<<bps*usd<<endl;
cout<<"French Franc: "<<frnc*usd<<endl;
cout<<"German Mark:"<<dstchmrk*usd<<endl;
cout<<"Japanese Yen: "<<yen*usd<<endl;
cout<<"Indian Rupee: "<<ind*usd<<endl;

//if 0 is returned
//the program ran successfully
return 0;

}
