#include <iostream>
using namespace std;
int main() {
    cout<<"problem1"<<endl;
    int x;
    cout <<"please enter a number : " ;
    cin >> x;
    if (x>0) {
        cout << x << endl;
    } else
        cout<<x<<" is negative number. "<<endl;

    cout<<"problem2"<<endl;
    int c, d;
    cout <<"please enter a number : " ;
    cin >> c>>d;
    if (c>d) {
        cout <<c<<"is greater than "<<d<<endl;
    } else {
        cout<<d<<"is greater than"<<c<<endl;
    }

    cout<<"problem3"<<endl;
    int b;
    cout <<"please enter a number : " ;
    cin >> b;
    if (b%2==0) {
        cout<<b<<" the nubmer is even"<<endl;

    }

    cout<<"problem4"<<endl;
    int num1, num2, num3;
    cout <<"please enter a number : " ;
    cin >> num1>>num2>>num3;
    if (num1>num2 && num1>num3) {
        cout <<num1<<" is greater than others "<<endl;
    } else if (num2>num1 && num2>num3) {
        cout <<num2<<" is greater than others "<<endl;
    } else if (num3>num1 && num3>num2) {
        cout <<num3<<" is greater than others "<<endl;
    }

    cout<<"problem5"<<endl;
    int year;
    cout<<"enter year:"<<endl;
    cin>>year;
    if ((year%4==0 && year%100!=0)  || (year%400==0)) {
        cout<<year<<" is a leap year"<<endl;
    } else {
        cout<<year<<" is not a leap year"<<endl;

    }

    cout<<"problem6"<<endl;
    int speed;
    cout<<"enter your speed:"<<endl;
    cin>>speed;
    if (speed<20) {
        cout<<"speed is too slow"<<endl;
    } else if (speed<80) {
        cout<<"speed is too fast"<<endl;
    } else  {
        cout<<"speed is just right"<<endl;

    }

    cout<<"problem7"<<endl;
    int mark;
    cout<<"enter your mark:"<<endl;
    cin>>mark;
    if (mark>50) {
        cout<<"pass"<<endl;
    } else  {
        cout<<"fail"<<endl;

    }

     cout<<"problem8"<<endl;
 int Num;
    cout<<"enter your number:"<<endl;
    cin>>Num;
    if (Num==0) {
        cout<<"zero"<<endl;
    } else if (Num<0){
    cout<<"negative number"<<endl;
    } else if (Num>0){
    cout<<"positive"<<endl;


    }
    cout<<"problem9"<<endl;
    char ch;
    cout<<"enter your character:"<<endl;
    cin>>ch;
    switch (ch) {
        case 'g':
            cout<<"Go"<<endl;
        break;
        case 'y':
            cout<<"get ready"<<endl;
        break;
        case 'r':
            cout<<"stop"<<endl;
    }

   cout<<"problem10"<<endl;
    int score;
    cout<<"enter your score:"<<endl;
    cin>>score;
    if (score>=90 && score<=100) {
        cout<<"A "<<score<<endl;
    } else if (score>=80 && score<=89) {
        cout<<"B "<<score<<endl;
    } else if (score>=70 && score<=79) {
        cout<<"C "<<score<<endl;
    } else if (score>=60 && score<=69) {
        cout<<"D "<<score<<endl;
    } else if (score>=50 && score<=59) {
        cout<<"F "<<score<<endl;
    }

    cout<<"problem11"<<endl;
    int n1, n2;
    cout<<"enter your numbers:"<<endl;
    cin>>n1>>n2;
    if (n2/n1==0 || n1%n2==0) {
        cout<<"they are divisible"<<endl;
    } else {
        cout<<"they are not divisible"<<endl;
    }
    cout<<"problem12"<<endl;
    int angle1, angle2, angle3;
    cout<<"enter your angle:"<<endl;
    cin>>angle1>>angle2>>angle3;
    if (angle1+angle2>angle3 && angle1+angle3>angle2) {
    }else {
        cout<<"triangle is valid"<<endl;
    }

    cout<<"problem13"<<endl;
    char l;
    cout<<"enter your letter:"<<endl;
    cin>>l;
    if (l>='A' && l<='Z') {
        cout<<"letter is uppercase"<<endl;
    } else if (l>='a' && l<='z'); {
        cout<<"letter is lowercase"<<endl;
    }else {
        cout<<"letter is not in alphabet"<<endl;

    }



    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.