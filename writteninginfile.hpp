#include<fstream>
#include"properties.hpp"
using namespace std;
void writeinfile(char WRITE[12])
#pragma once
{
   system("cls");
   file_name f2;
   int i=0,b=0,c;
    
    system("cls");
    system("color E0");
    cout<<"ENTER '~' to end typing////~~~~Enjoy Writing~~~~~////File automatically gets save"<<endl<<endl;
              ifstream storein(WRITE);
               storein.read((char*)(&f2),sizeof(f2));
               fflush(stdin);
               storein.close();
                for(int i=1;i<f2.j;i++)
                cout<<f2.W[i];
                cout<<f2.j;
             for(i=f2.j;i<2000;i++)
    { 
                if(i%75==0)
               {
                 f2.W[i]='\n';
                 cout<<f2.W[i];
                 i++;
                 continue;
               }
               f2.W[i]=getch();
               if(f2.W[i-1]=='. '|| i==1 )
               {
                  f2.W[i]=toupper(f2.W[i]);  
               }
               if (f2.W[i-1]==' ' && f2.W[i]=='i')
               {
                f2.W[i]=toupper(f2.W[i]); 
               }
               
               
               cout<<f2.W[i];
               c=c++;
               
     if(f2.W[i]=='~')
       {
             f2.W[i]='\0';
             f2.j=i;
            ofstream storein(WRITE);
               storein.write((char*)(&f2),sizeof(f2));
               fflush(stdin);
               storein.close();
          goto end_label;
       }
         if(i==2000)
         {
            cout<<endl<<endl<<"you have reached tha maximum letter limit"<<endl;
            cout<<"SUBSCRIBE OUR PRO PACK FOR UNLIMITED WRITTING"<<endl;

         }
    }
    end_label:
       system("cls");
       
}
