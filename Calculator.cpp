#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    char x;
    cout<<"Enter num1: "<< endl;
    cin>>num1;

    cout<<"Enter num2: "<< endl;
    cin>>num2;

    
    cout<<"Press a for Addition "<< endl;
    cout<<"Press s for Subtraction "<< endl;
    cout<<"Press m for Multiplication "<< endl;
    cout<<"Press d for Division "<< endl;
    cout<<"Press r for Remainder "<< endl;
    cin>>x;
    if(x== 'a'){
      cout<<"The sum = "<< num1 + num2 <<endl;
    }
    else if(x== 's'){
        cout<<"The subtracttion :"<< num1- num2<< endl;
    }
    else if(x== 'm'){
        cout<<"The multiplication = "<<num1*num2 <<endl;
    }
    else if(x== 'd'){
        cout<<"The division = "<<num1/num2 <<endl;
    }
    else if(x== 'r'){
        cout<<"the remainder = "<<num1 % num2 <<endl;
    }
    else{
        cout<<"Invalid operator" << endl;
    }
}