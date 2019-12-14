#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> split(string str,char del)
{
    int i=0;
    vector<string>v;
    string temp;
    while(i!=str.length())
    {
       if(str[i]!=del)
       {
          temp+=str[i];
          i++;
       }
       else
       {
           v.push_back(temp);
           temp="";
           i++;
       }

    }
    v.push_back(temp);
    return v;
}


int main(){
    string str;
    // int a=atoi(str.c_str());

     string file,file2;
     cin>>file;
     cin>>file2;
     fstream myfile;
     ofstream wfile;
     myfile.open(file.c_str());
     wfile.open(file2.c_str());

     while(getline(myfile,str)){
           vector<string>v=split(str,' ');
           if(v[0]>="0"&&v[1]<="9"&&v[0]<="9"&&v[1]>="0"){
            int a=atoi(v[0].c_str());
            int b=atoi(v[1].c_str());
            v.clear();
           wfile<<a+b<<endl;
           }
           else
            wfile<<"Error Input"<<endl;

     }
     myfile.close();
     wfile.close();
//     cout<<a;



}
