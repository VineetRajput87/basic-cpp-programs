#include<iostream>
using namespace std;

class Book
{
    private:
        string title;
        string author_name;
        float price;
    public:
        void getdata()
        {
            cout<<"Enter Title of the Book : ";
            cin>>title;
            cout<<"Enter Author name of the Book : ";
            cin>>author_name;
            cout<<"Enter Price of the Book : ";
            cin>>price;
        }
        void display()
        {
            cout<<"\nTitle : "<<title<<endl;
            cout<<"Author Name : "<<author_name<<endl;
            cout<<"Price : "<<price<<endl;
        }

};

int main()
{
    Book obj;
    obj.getdata();
    obj.display();

    return 0;
}