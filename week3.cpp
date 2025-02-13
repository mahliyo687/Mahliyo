#include <iostream>
using namespace std;
   int main () {
       cout<<"problem1"<<endl;
       int a,b,c,d,e;
       cin>>a>>b>>c>>d>>e;
       int sum=a+b+c+d+e;
       cout<<"sum is: "<<sum<<endl;

       cout<<"problem2"<<endl;
       int studentid;
       cout<<"Enter Student ID: "<<endl;
       cin>>studentid;
       cout<<"Enter Student "<<studentid<<endl;
       float studentgpa;
       cout<<"Enter  GPA: "<<endl;
       cin>>studentgpa;
       int yearofstudy;
       cout<<"Enter Year of student: "<<endl;
       cin>>yearofstudy;
       int studentstudyfee;
       cout<<"Enter Student Fee "<<endl;
       cin>>studentstudyfee;

       cout<<"problem3"<<endl;
       int temperatureincelcius;
       cout<<"Enter Temperature incelcius: "<<endl;
       cin>>temperatureincelcius;
       float temperatureinfahrenhit=(temperatureincelcius*9/5)+32;
       cout<<"temperature in fahrenhit is "<<temperatureinfahrenhit<<endl;

       cout<<"Problem4"<<endl;
       double costperitem;
       cout<<"Enter cost peritem: "<<endl;
       cin>>costperitem;
       int numberofitem;
       cout<<"Enter Number of Item: "<<endl;
       cin>>numberofitem;
       double totalcost=numberofitem*costperitem;
       cout<<"Total Cost is: "<<totalcost<<endl;

       cout<<"Problem5"<<endl;
       int fatherage;
       cout<<"Enter Father's age: ";
       cin>>fatherage;
       int matherage;
       cout<<"Enter Mother's age: ";
       cin>>matherage;
       int myage;
       cout<<"Enter My age: ";
       cin>>myage;
       int brotherage;
       cout<<"Enter Brother's age: ";
       cin>>brotherage;
       int averageage=(fatherage+matherage+myage+brotherage)/4;
       cout<<"Averageage: "<<averageage<<endl;

       cout<<"Problem6"<<endl;
       int length;
       cout<<"Enter Length: "<<endl;
       cin>>length;
       int width;
       cout<<"Enter Width: "<<endl;
       cin>>width;
       int perimeter=2*(length+width);
       cout<<"perimeter"<<perimeter<<endl;
       int area=length*width;
       cout<<"area is: "<<area<<endl;

       cout<<"problem7"<<endl;
       int divident;
       cout<<"Enter Dividend: "<<endl;
       cin>>divident;
       int divisor;
       cout<<"Enter Divisor: "<<endl;
       cin>>divisor;
       int quotient=divident/divisor;
       int remainder=divident%divisor;
       cout<<"Quotient: "<<quotient<<endl;
       cout<<"Remainder: "<<remainder<<endl;

       cout<<"problem8"<<endl;
       int amountinusd;
       cout<<"Enter amount in dollar: "<<endl;
       cin>>amountinusd;
       int amountinuzb=amountinusd*12500;
       cout<<"amount in Uzb is: "<<amountinuzb<<endl;

       cout<<"problem10"<<endl;
       int radius;
       cout<<"Enter Radius: "<<endl;
       cin>>radius;
       int height;
       cout<<"Enter Height: "<<endl;
       cin>>height;
       double volume=3.14*radius*radius*height;
       cout<<"the volume is: "<<volume<<endl;

       cout<<"problem9"<<endl;
       int rad;
       cout<<"Enter Radius: "<<endl;
       cin>>rad;
       double Area=3.14*rad*rad;
       cout<<"the area is: "<<Area<<endl;

       cout<<"problem11"<<endl;
       int distance;
       cout<<"Enter Distance: "<<endl;
       cin>>distance;
       int time;
       cout<<"Enter Time: "<<endl;
       cin>>time;
       double averagespeed=distance/time;
       cout<<"the average speed: "<<averagespeed<<endl;

       cout<<"problem12"<<endl;
       int minutes;
       cout<<"Enter Minutes: "<<endl;
       cin>>minutes;
       int hours=minutes/60;
       int restminutes=minutes-hours*60;
       cout<<"hours: "<<hours<<","<<restminutes<<"minutes"<<endl;

       cout<<"problem13"<<endl;
       int sppu;
       cout<<"Enter selling price per unit: "<<endl;
       cin>>sppu;
       int vcpu;
       cout<<"Enter variable cost per unit : "<<endl;
       cin>>vcpu;
       int bep=vcpu*sppu;
       cout<<"bep: "<<bep<<endl;

       cout<<"problem14"<<endl;
       int basicsalary;
       cout<<"Enter Basic salary: "<<endl;
       cin>>basicsalary;
       int taxpercentage;
       cout<<"Enter Tax percentage: "<<endl;
       cin>>taxpercentage;
       int totalsalary=basicsalary-basicsalary*taxpercentage/100;
       cout<<"Total Salary: "<<totalsalary<<endl;

       cout<<"problem15"<<endl;
       int originalprice;
       cout<<"Enter Original Price: "<<endl;
       cin>>originalprice;
       int dicountpercentage;
       cout<<"Enter Dicount Percentage: "<<endl;
       cin>>dicountpercentage;
       int finalprice=originalprice-originalprice*taxpercentage/100;
       cout<<"Final Price: "<<finalprice<<endl;
       return 0;

   }

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.