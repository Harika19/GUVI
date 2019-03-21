#reverse a string and copy a string

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
class my{
public:
void rev(char s[],char c[]){
int x,i=0,j;
x=strlen(s);
for(i=x-1;i>=0;i--)
{
c[j]=s[i];
cout<<c[j];
}
cout<<"\n";
}
void cop(char s[],char g[]){
int i=0,x;
x=strlen(s);
for(i=0;i<x;i++)
{
g[i]=s[i];
cout<<g[i];
}
}
};
int main() {
	// your code goes here
char s[10]="tryitout",g[10],c[10];
my ob;
ob.rev(s,c);
ob.cop(s,g);
	return 0;
}
