#include<bits/stdc++.h>
using namespace std;

string test1(string id){

    if(id[0]=='0'&&id[1]=='1'&&id[2]=='1'){

        if((id[3]=='0'&&(id[4]>='3'&&id[4]<='9'))||(id[3]=='1'&&(id[4]>='0'&&id[4]<='9'))){

            if(id[5]>='1'&&id[5]<='3'){

                if((id[6]>='0'&&id[6]<='9')&&(id[7]>='0'&&id[7]<='9')){

                        if((id[6]!='0'||id[7]!='0')&&(id[8]>='0'&&id[8]<='9')){
                                               return "Accepted";
                           }

                        else if((id[6]=='0'&&id[7]=='0')&&(id[8]>='1'&&id[8]<='9')){
                                               return "Accepted";
                           }

                }

            }
        }
    }


return "Rejected";
}

string four(string exe){

      if((exe[0]>='1'&&exe[0]<='9')||(exe[0]>='a'&&exe[0]<='z')){

            if(exe[1]=='+'||exe[1]=='-'){

                if(exe[2]=='i'&&((exe[3]>='1'&&exe[3]<='9')||(exe[3]>='a'&&exe[3]<='z'))){
                    return "Accepted";
                }
                else if(((exe[2]>='1'&&exe[2]<='9')||(exe[2]>='a'&&exe[2]<='z'))&&exe[3]=='i'){
                    return "Accepted";
                }

            }
        }
return "Rejected";

}





string six(string exe){

  if((exe[0]=='x'||exe[0]=='y'||exe[0]=='z')&&exe[1]=='='){

    if((exe[2]>='1'&&exe[2]<='9')||(exe[2]>='a'&&exe[2]<='z')){
            if(exe[3]=='+'||exe[3]=='-'){
                if(exe[4]=='i'&&((exe[5]>='1'&&exe[5]<='9')||(exe[5]>='a'&&exe[5]<='z'))){
                        return "Accepted";

                }
            }
        }



   }

 return "Rejected";
 }


string test2(string str){

    if(str.length()>=3){

        if(str[0]>='0'&&str[0]<='9'&&str[1]>='A'&&str[1]<='Z'){
            if(!((str[2]>='a'&&str[2]<='z')||(str[2]>='A'&&str[2]<='Z'))){
                return "Accepted";
            }
        }

    }

return "Rejected";



}


string test3(string str){

for(int i=0;i<str.length();i++){



    if(str[i]=='+'||str[i]=='-'||str[i]=='.'){
            if((str[i]=='+'||str[i]=='-')&&str[i+1]=='.'){
                continue;
            }
           else if(!(str[i+1]>='0'&&str[i+1]<='9')){
            return "Rejected";}
        }

    else if(!(str[i]>='0'&&str[i]<='9')){
        return "Rejected";
    }


  }

return "Accepted";
}


string test4(string str){


   if(str.length()>=8){
          for(int i=0;i<str.length();i++){
            if(str[i]>='A'&&str[i]<='Z'){
              for(int j=0;j<str.length();j++){
               if(str[j]>='a'&&str[j]<='z'){
                  for(int k=0;k<str.length();k++){
                   if(str[k]>='0'&&str[k]<='9'){
                     if(str[str.length()-1]=='@'||str[str.length()-1]=='#'||str[str.length()-1]=='$'||str[str.length()-1]=='&'){
                     return "Accepted";
                     }
                   }
                  }
               }
              }
            }
          }

   }

return "Rejected";
}

















int main(){

    while(true){
int des;
cout <<" Enter 1 For ID:\n Enter 2 for Complex\n Enter 3 For Regular Expression\n Enter 4 for floating point check\n Enter 5 for password\n";
cin>>des;
string str;

if (des==1){

        cin>>str;

        cout<<test1(str);

}


else if(des==2){

cin>>str;
if(str.length()==4){
        cout<<str.length()<<endl;
       cout<<four(str);

}
else if(str.length()==6){
   cout<<six(str);
}
else {
    cout<<"Rejected";

}

}


else if(des==3){

   cin>>str;
 cout<<test2(str)<<endl;

}




else if (des==4){

   cin>>str;
 cout<<test3(str)<<endl;
}


else if(des==5){


   cin>>str;
 cout<<test4(str)<<endl;
}


cout<<"\n";
}

}






