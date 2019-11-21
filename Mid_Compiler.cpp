#include<bits/stdc++.h>
using namespace std;

string test(string str){

   int n,i;
   n=str.length()-9;
   //cout<<n;
   if(str.length()>=12){

                   for(i=0;i<str.length()-9;i++){
                                                   if(!(str[i]>='A'&&str[i]<='Z')){
                                                     return "Not Accepted1";
                                                   }

                                  }


                    i=n;
                    if(str[i]=='@'||str[i]=='#'||str[i]=='$'){

                                    if(str[i+1]=='U'&&str[i+2]=='I'&&str[i+3]=='U'){
                                                if(str[i+4]>='1'&&str[i+4]<='3'){
                                                              if(str[i+5]=='0'&&str[i+6]=='0'){
                                                                            if(str[i+7]>='1'&&str[i+7]<='9'){
                                                                                                  if(str[i+8]>='A'&&str[i+8]<='Z')
                                                                                                        return "Accepted";
                                                                              }
                                                                }
                                                              else if((str[i+5]>='0'&&str[i+5]<='9')&&(str[i+6]>='0'&&str[i+6]<='9')&&(str[i+7]>='0'&&str[i+7]<='9')){
                                                                    if(str[i+8]>='A'&&str[i+8]<='Z')
                                                                        return "Accepted";
                                                                }
                                                             else
                                                                return "Not Accepted";

                                                }
                                                 else
                                                    return "Not Accepted";
                                       }
                        else
                            return "Not Accepted";
                    }
                  else
                            return "Not Accepted";
                }
    else{
        return "Not Accepted2";
    }

    return "Not Accepted3";
}

int main(){
          int n;
while(true){


            cout<<"1.String Test\n2.Exit\n";
            cin>>n;
            if(n==1){

                        string str;

                        cout<<"Enter expression:\n";

                        cin>>str;

                        cout<<test(str)<<"\n";
            }
            else
                break;

    }


}
