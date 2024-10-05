
//Program To Find Largest Of 3 Numbers.

#include <iostream>
using namespace std;

int main(){
// Making 3 variables.
int num1, num2, num3;

// Taking input from user.
cout<<"Enter 3 numbers : "<<endl;
cin>>num1>>num2>>num3;

// Using If-else to find the largest number.
if(num1 >= num2 && num1 >= num3){
    cout<<"The largest number is "<<num1<<endl;
}
else if (num2 >= num3 && num2 >= num1 ){
    cout<<"The largest number is "<<num2<<endl;
}
else{
    cout<<"The largest number is "<<num3<<endl;
}
    return 0;
}

