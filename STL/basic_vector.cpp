#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> example;
    vector <int> another_example;

    example.push_back(10);
    example.push_back(20);

    another_example.push_back(10);
    another_example.push_back(20);

    if(example == another_example){
        cout<<"equal vectors";
        example.push_back(100);
    }

    cout<<endl<<"the Vector : "<<endl;

    for(int i=0;i<example.size();i++)
        cout<<example[i]<<endl;

    return 0;
}
