#include<iostream>
int main(){
    int a=10;
    int b=21;
    int c=15;
    int max;
    if(a>b)
        {
            if(a>c)
                max=a;
            else
                max=c;
        }
    else
        {
            if(b>c)
                max=b;
            else
                max=c;
        }

std::cout<<"great number="<<max;
    return 0;
}