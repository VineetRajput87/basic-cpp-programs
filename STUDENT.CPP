/* Q.5 :-
 create a class student having data members as
 roll_number
 name
 marks
 and static data member as count
 witch will count number of object created,
 create a static function witch will return the number of object ctreated.*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Student
{
  int Roll_no,Marks;
  char Name[20];
  static int count;

  public :

static int getcountobject()
{
  return count;
}
void Student:: getter()
{
  cout<<endl<<"Name : ";
  gets(Name);
  cout<<endl<<"Roll number : ";
  cin>>Roll_no;
  cout<<endl<<"Marks : ";
  cin>>Marks;
  count++;
}
void Student:: setter()
{
  cout<<"Showing The data : "<<endl;
  cout<<endl<<"Name : "<<Name;
  cout<<endl<<"Roll number : "<<Roll_no;
  cout<<endl<<"Marks : "<<Marks;
}

};

int Student :: count=0;

void main()
{
   int no,i;
   clrscr();
   Student obj[10];
   cout<<endl<<"Number of Students : ";
   cin>>no;
   for(i=0;i<no;i++)
   {
     clrscr();
     cout<<"Enter the data of "<<i+1<<" Student : "<<endl;
     obj[i].getter();
   }
   for(i=0;i<no;i++)
   {
    cout<<"The Data of "<<i+1<<" Student"<<endl;
    obj[i].setter();
   }
   cout<<endl<<"Number of objects : "<<Student::getcountobject();
   getch();
}
