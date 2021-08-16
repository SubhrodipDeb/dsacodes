#include<iostream>
using namespace std;

class student{
    string name;
    public:
    int age;
    bool gender;
    void setname(string s){
        name=s;
    }
    void getname(){
        cout<<name<<endl;
    }

    void printinfo(){
        cout<<"Name=";
         getname();
        cout<<"Age=";
        cout<<age<<endl;
        cout<<"Gender=";
        cout<<gender<<endl;

    }
};
int main(){
    student arr[3];
    string s;
    for(int i=0;i<3;i++){
         cout<<"Name=";
        cin>>s;
        arr[i].setname(s);
        cout<<"Age=";
        cout<<arr[i].age;
        cout<<"Gender=";
        cout<<arr[i].gender;
    }
    for(int i=0;i<3;i++){
        arr[i].printinfo();
    }
}