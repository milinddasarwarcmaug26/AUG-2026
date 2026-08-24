#include<iostream>
int main(){
    int a=5;
    int b=10;
    int temp;
    std::cout<<"value of a before swap="<<a;
    std::cout<<"\nvalue of b before swap="<<b;
    temp=a;
    a=b;
    b=temp;
    std::cout<<"\nvalue of a after swap="<<a;
    std::cout<<"\nvalue of b after swap="<<b;
    return 0;
}