#include <iostream>
#include<string>
#include <windows.h>

#define NO 5
using namespace std;
//define gotoxy:
COORD coord={0,0};
void gotoxy(int x,int y)
{
    coord.X=x*2;
    coord.Y=y*2;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

//define address
struct Address{
    string city;
    int st_no,b_no;
};

//define employee structure
struct Employee {
    int code,age;
    string name;
    float sal,bouns,tax;
    Address emp_add;
};
int main()
{
   int index_user=0;
    Employee emp[NO];

    cout << "please select user number : ";
    cin>> index_user;

    //table header:
        gotoxy(1,5);
        cout << "code" ;

        gotoxy(10,5);
        cout << "name" ;

        gotoxy(19,5);
        cout << "age" ;


        gotoxy(28,5);
        cout << "street number" ;

        gotoxy(37,5);
        cout << "building number" ;

        gotoxy(46,5);
        cout << "city" ;

        gotoxy(55,5);
        cout << "salary" ;
/*
        gotoxy(55,2);
        cout << "bouns" ;

        gotoxy(108,2);
        cout << "tax" ;
*/
        //input data:
    if((index_user) <= NO){

            gotoxy(1,(index_user+4)+2);  //to select the line of selected user
            cin >>emp[index_user-1].code;

            gotoxy(10,(index_user+4)+2);
            cin >>emp[index_user-1].name;

            gotoxy(19,(index_user+4)+2);
            cin >>emp[index_user-1].age;

            gotoxy(28,(index_user+4)+2);
            cin >> emp[index_user-1].emp_add.st_no;

            gotoxy(37,(index_user+4)+2);
            cin >>emp[index_user-1].emp_add.b_no;

            gotoxy(46,(index_user+4)+2);
            cin >>emp[index_user-1].emp_add.city;

            gotoxy(55,(index_user+4)+2);
            cin >>emp[index_user-1].sal;
/*
            gotoxy(40,(i+2)+15);
            cin >>emp[index_user-1].bouns;

            gotoxy(45,(i+2)+15);
            cin >>emp[index_user-1].tax;
            */

    }
    else
        cout <<"\n not valid number";

return 0;
}
