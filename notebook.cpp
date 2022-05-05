#include"openexisting.hpp"
#include"newuser.hpp"
#include"writteninginfile.hpp"
using namespace std;
int main()
{
    int b,c,n=0;
    char password[10];
    char filename[15];
    while(n!=1){
    system("color F0");
    	system("cls");
     cout<<"PRESS 1 for new file"<<endl<<"PRESS 2 FOR OPENING EXISTING FILE"<<endl<<"press 3 to exit application"<<endl;
    b=getch();
    system("cls");
    switch (b)
    {
    case '1':
       newfile(filename);
       writeinfile(filename);
        break;
    case '2':
       c= existing_file(filename);
          if(c==1)
          {
              cout<<"file doesnot exist"<<endl;
              system("pause");
          }
          else if(c!=1)
          {
          writeinfile(filename);
          }
          case '3':
             n=1;
             break;
    default:
        break;
    }

    }
          system("cls");
          cout<<"THANKS FOR USING OUR APP"<<endl;
          system("pause");
          return 0;
}
