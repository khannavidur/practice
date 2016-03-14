#include<iostream>
using namespace std;

template <class a_type> class calculate{
    public :
        a_type multiply(a_type x,a_type y){
            return x*y;
        }

        a_type add(a_type x,a_type y){
            return x+y;
        }
};

int main(){
    calculate<int> intCalc;
    int x,y,sum;
    cout<<"Enter no 1 : ";
    cin>>x;
    cout<<"Enter no 2 : ";
    cin>>y;
    sum = intCalc.add(x,y);
    cout<<"Sum is : "<<sum;
    return 0;
}
