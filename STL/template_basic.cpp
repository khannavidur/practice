#include<iostream>
using namespace std;

template <class a_type> class calculate{
    public :
        a_type multiply(a_type x,a_type y){
            return x*y;
        }

        a_type add(a_type x,a_type y);
};

template <class a_type> a_type calculate<a_type>::add(a_type x,a_type y){
    return x+y;
}

int main(){
    calculate<int> intCalc;
    int x,y;
    cout<<"Enter no 1 : ";
    cin>>x;
    cout<<"Enter no 2 : ";
    cin>>y;
    cout<<"Sum is : "<<intCalc.add(x,y)<<endl;
    cout<<"Product is : "<<intCalc.multiply(x,y);
    return 0;
}
