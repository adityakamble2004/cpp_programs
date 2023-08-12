#include<iostream>
using namespace std;

class men{

    private: 
     int age,height,weight;

     public:
        int roll_no;

        void enfo (){

            cout<<"enter your age "<<endl;
            cin>>age;
            cout<<"enter your height "<<endl;
            cin>>height;
            cout<<"enter your weight "<<endl;
            cin>>weight;

        }

    void get_info(){

         cout<<"your input follows "<<endl;
            cout<<"age ="<<age<<endl;
            cout<<"height ="<<height<<endl;
            cout<<"weight ="<<weight<<endl;
    }



};

int main()
{   
    men adi;
    adi.enfo();
    adi.get_info();

    cout<<"hallo world"<<endl;
    

}