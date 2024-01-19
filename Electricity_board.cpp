/* Q:- An Electricity board charge the following rate to domestic user to discourage large consumption of energy -
   1. For the first 100 Unit 60P / Unit .
   2. For the next 200 Unit 80P / Unit .
   3. Beyond 200 Unit 92P / Unit . 

   All Users charge minimum Rs 50. If the total amount is more read the name of user , number of Unit consume and print out charge with the name.  
*/


#include<iostream>
using namespace std;
 
class Electricity
{
    private:
        string User_name;
        float Unit_consumed;

    public:
        void getdata()
        {
            cout<<"Enter the User Name : ";
            cin>>User_name;
            fflush(stdin);
            cout<<"Enter the Unit Consumed : ";
            cin>>Unit_consumed;
        }

        void showdata()
        {
            cout<<"\nUser Name : "<<User_name<<endl;
            cout<<"Total charge : "<<calculate()<<endl;
        }
        float calculate()
        {
            float charge = 0;
           
            if(Unit_consumed<100)        // For the first 100 Unit 60P/Unit.
                charge = (Unit_consumed*0.6);
            else if(Unit_consumed>=100 && Unit_consumed<=200)  // For the next 200 Unit 80P/Unit.
                charge = (Unit_consumed*0.8);  
            else if(Unit_consumed>200)          // Beyond 200 Unit 80P/Unit.
                charge = (Unit_consumed*0.92);
            
            if(charge>300)
                charge = charge + (charge*15)/100;

            if (charge<50)
                charge = 50;    
            
            return charge;
        }
};

int main()
{
    Electricity Object;
    Object.getdata();
    Object.showdata();

    return 0;
}
