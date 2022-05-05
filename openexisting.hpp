#include<cctype>
#include<fstream>
#pragma once
#include"properties.hpp"
using namespace std;

int existing_file(char OPEN[15])
//int main()
{
    int i;
    char existing[100];
    file_name f3,f4;
    int b,noti=0;
    	system("color B0");
    system("cls");
/************************************************/
    ifstream namestore("nameoffile.dat",ios::app);
    namestore.read((char*)(&existing),sizeof(existing));
    namestore.close();
/************************************************/
cout<<"The existing files are:\n"<<existing;
fflush(stdin);
    cout<<"\n\t\tENTER THE NAME OF YOUR FILE:"<<endl;
    cin>>f3.fname;

      for ( i=0; i<strlen(f3.fname); i++)
    f3.fname[i]=toupper(f3.fname[i]);
     strcat(f3.fname,".dat");
    for ( i=0; i<strlen(f3.fname); i++)
    OPEN[i]=f3.fname[i];
    
    OPEN[i]='\0';
    ifstream open(f3.fname);

        if(!open.is_open())
          {
              noti=1;
              goto label;
          }
    
    open.read((char*)(&f4),sizeof(f4));
    fflush(stdin);
    open.close();
     rlabel:
     cout<<"ENTER THE PASSWORD OF YOUR FILE:"<<endl;

    for (int i=0; i<strlen(f4.Fpass); i++)
    {
        f3.Fpass[i]=getch();
        cout<<"*";
    }
    b=pass_check(f4.Fpass,f3.Fpass);
     
       try
    {
        if(b==1)
        {
        throw b;
        }
        else
        {
        goto label;
        }
    }
     catch(int d)
    {
        static int g=0;
        ++g;
        cout<<endl<<"Wrong password!!!!program close in  "<<3-g<<" attemp"<<endl;
        system("pause");
        system("cls");
        try
        {
            if(g==3)
                 throw g;
            else
                goto rlabel;
        }
        catch(int d)
        {
            throw;
        }
    }
    
     label:
        cout<<endl;
        return noti;
}
