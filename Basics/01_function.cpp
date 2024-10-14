// We will start the concept of function C++
#include<iostream>
using namespace std;
int fact(int x);//It is a function prototype 
// Function prototype is a declaration of function without its body so it specifies its name, datatype and return type
// also it tells the compiler to a function exists and can be called later
int main(){
    int x;
    cout<<"Enter first number";
    cin>>x;
    cout<<"factorial of  "<<x<<" is "<<fact(x)<<endl;


};
int fact(int x){
    if(x==0){
        return 1;

    }
    else{
        return x*fact(x-1);
    };
};