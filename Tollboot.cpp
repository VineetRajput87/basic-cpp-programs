#include<iostream>
using namespace std; 
class Tollbooth
{ 
private:
    int total_cars=0;
    double total_amount=0; 

public:
    void payingcar();
    void nonpayingcar();
    void display();
};
void Tollbooth::payingcar()
{
    total_cars++;
    total_amount=total_amount+50;
}
void Tollbooth::nonpayingcar()
{
    total_cars++;
}
void Tollbooth::display()
{ 
    int choice;
    char input;
    
    do{
        cout<<"1.NO Pass: Pay 50rs "<<endl;
        cout<<"2.Have VIP pass"<<endl;
        cout<<"Enter your Choice : ";
        cin>>choice;
          if(choice==1)
          payingcar();
          else if(choice==2)
          nonpayingcar();
          else
          cout<<"Invalid Choice";
          cout<<"Press $ to break Program : ";
          cin>>input;   
    }while (input!='$'); 
    
    cout<<endl<<"The total cars passed from Tollbooth : "<<total_cars;
    cout<<endl<<"The total amount is : "<<total_amount<<"rs";
}
int main()
{
    Tollbooth obj;
    obj.display();
    return 0;
}
