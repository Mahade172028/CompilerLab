#include<bits/stdc++.h>
using namespace std;

string test(string str){

      int i=0,k=0;
      string valid="Valid",NotValid="Not Valid";
      vector<int> v;

      if(str[i]=='<')
        {
                v.push_back(str[i]);
                i++;

                while(str[i]!='>')
                    {

                           if(str[i]=='<')
                                return NotValid;

                                v.push_back(str[i]);
                                i++;

                           if(i>=str.length())
                                return NotValid;
                     }


                v.push_back(str[i]);
                i++;

                if(str[i]=='0'&&str[i+1]=='0'&&str[i+2]=='0')
                    return NotValid;

                else if(str[i]>='0'&&str[i]<='9'&&str[i+1]>='0'&&str[i+1]<='9'&&str[i+2]>='0'&&str[i+2]<='9')
                    {
                        i=i+3;


                        while(str[i]!='.')
                            {
                             if(!(str[i]>='a'&&str[i]<='z'))
                                return NotValid;
                             if(i>=str.length())
                                return NotValid;
                             i++;
                            }
                        i++;

                        if(str[i]!='_')
                            return NotValid;

                        i++;

                        if(str[i]>='a'&&str[i]<='z')
                         {
                             i++;
                             while(k!=v.size())
                                 {
                                     if(str[i]!=v[k])
                                        return NotValid;

                                     if(i>str.length())
                                        return NotValid;

                                     k++;i++;
                                 }
                             if(i==str.length())
                                return valid;

                         }

                    }




       }

return NotValid;
}

int main(){

    string str;
    cin>>str;
    cout<<test(str);




}
