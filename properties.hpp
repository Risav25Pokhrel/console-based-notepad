#include<iostream>
#include<string.h>
#include<conio.h>
#pragma once
using namespace std;

class file_name
{
    public:
        char fname[15],Fpass[10],W[2000];
        int j;
};
 int pass_check(char A[],char B[])
 {
     if(strcmp(A,B)==0)
    {
           return 0;
    }
     else if (strcmp(A,B)!=0)
    {
        return 1;
    }
 }
 
 