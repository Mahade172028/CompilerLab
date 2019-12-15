#include <bits/stdc++.h>

using namespace std;
int a;


void findAns(string r)
{
    int t = r[0]-'0';
   // cout<<t<<endl;
   // cout<<"T"<<t-a<<endl;

   int ans = abs(t-a);
   cout<<pow(ans,3)<<endl;
}

int marge(string val)
{
    ofstream file;
    file.open("Out.txt",ios_base::app);


    int flag=0;
    //cout<<val.size();
    if(val[0]>='0' &&val[0]<='9')
    {
        if(val[2]>='0' &&val[2]<='9')
        {
              flag=1;
             // break;
        }
    }
    if(flag==1)
    {
        if(val[1]=='+')
        {
            //file<<(val[0]-'0')+(val[2]-'0')<<endl;
       ///     cout<<(val[0]-'0')+(val[2]-'0')<<endl;
            a=(val[0]-'0')+(val[2]-'0');
        }
        else  if(val[1]=='-')
        {
       //     cout<<(val[0]-'0')-(val[2]-'0')<<endl;
            a=(val[0]-'0')-(val[2]-'0');
        }
        else  if(val[1]=='*')
        {
        ///   cout<<(val[0]-'0')*(val[2]-'0')<<endl;
           a=(val[0]-'0')*(val[2]-'0');
        }
        else  if(val[1]=='/')
        {
       ///     cout<<(val[0]-'0')/(val[2]-'0')<<endl;
            a=(val[0]-'0')/(val[2]-'0');

        }
         else
        {
         cout<< "Error Input"<<endl;
          return 0;
        }
    }
    else
    {
         file<< "Error Input"<<endl;
    }

  ///cout<<"Finnd ans: "<<a<<endl;
}

int main()
{
    ifstream file;
    ifstream file1;
    file.open("expression.txt");
    file1.open("re.txt");

    while(!file.eof())
    {
        string val;
        getline(file,val);
     //   cout<<<<endl;
        if(val.size()==3)
        {
            marge(val);
            //file1
            string r;
            getline(file1,r);
            findAns(r);
        }
        else
        {

            cout<<"Error INput"<<endl;
        }

//       string op;
//

        marge(val);

    }
    return 0;
}
