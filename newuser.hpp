#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include"properties.hpp"
#pragma once
using namespace std;

void newfile(char NEW[15])
//int main()
{
    file_name f1;
    int b=0,i=0;
    char a,f[15];
    	system("color B0");
    cout<<"ENTER THE NAME OF NEW FILE:"<<endl;
    cin>>f1.fname;

           cout<<"ENTER THE PASSWORD FOR THE FILE:"<<endl;
           cin>>f1.Fpass;
          
/************************************************/
    for ( i=0; i<strlen(f1.fname); i++)
    {
    f[i]=f1.fname[i];
    }
    f[i]='\n';
    ofstream namestore("nameoffile.dat",ios::app);
    namestore.write((char*)(&f),sizeof(f));
    namestore.close();
/************************************************/
   for (int i=0; i<strlen(f1.fname); i++)
    f1.fname[i]=toupper(f1.fname[i]);
    strcat(f1.fname,".dat");
    f1.W[1]='\0';
    f1.j=0;
     for ( i=0; i<strlen(f1.fname); i++)
    {
    NEW[i]=f1.fname[i];
    }
    NEW[i]='\0';
    
/************************************************/
//creating name of the file
    ofstream create(f1.fname);
    create.write((char*)(&f1),sizeof(f1));
    create.close();
    //fflush(stdin);
/************************************************/
    system("cls");
    cout<<"\t\t~~~~CONGRATULATION !!! YOUR FILE HAS BEEN CREATEATED~~~~\n"<<endl;
    system("pause");
}