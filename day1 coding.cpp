#include <iostream>
int main() {
    std::cout << "hi how are you";

    return 0;
} 

// program to add two numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,sum;
    cout << "Enter two integers: ";
    cin >>  a >> b;
    sum=a+b;
    cout << "sum is : " << sum;
    return 0;
}

//program to find greater of two numbers
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<< "Enter two numbers:";
    cin >> a >> b;
    if (a>b){
        cout << a << " is greater";
    }
    else{
        cout << b << "  is greater";
    }
    return 0;

}

