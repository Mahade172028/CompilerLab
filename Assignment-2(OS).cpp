#include<bits/stdc++.h>
#include<vector>
#include<string>

using namespace std;



struct table{
            string name;
            string type;
            string value;

        };




vector<string> split(const string& s, char delimiter)
         {
             vector<string> tokens;
             string token;
            istringstream tokenStream(s);
             while (getline(tokenStream, token, delimiter))
             {
             tokens.push_back(token);
             }
            return tokens;
          }




struct table a[100];
int i=0;

int main(){

           string str;
           int n;


 while(true){

        cout<<"1 For Insert:"<<"\n"<<"2 For View:"<<"\n"<<"3 For delete:"<<endl;
        cin>>n;


        if(n==1){ //INSERT ELEMENT

                    cout<<"Type Input"<<endl;

                    getline(cin >> ws, str);

                    str.erase(str.length()-1);

                    vector<string> temp=split(str,' ');




                if (count(temp[1].begin(),temp[1].end(),',')>0){


                                int comma=count(temp[1].begin(),temp[1].end(),',');

                                vector<string>t2=split(temp[1],',');


                                for(int j=0;j<=comma;j++){

                                               if(count(t2[j].begin(),t2[j].end(),'=')>0){

                                                             vector<string>t3=split(t2[j],'=');

                                                             a[i].type=temp[0];   //for type
                                                             a[i].name=t3[0];
                                                             a[i].value=t3[1];
                                                             i++;
                                                        }


                                                 else{
                                                             a[i].type=temp[0];
                                                             a[i].name=t2[j];
                                                             a[i].value="NULL";
                                                             i++;

                                                      }
                                                    }
                                }



                else{

                              if(count(temp[1].begin(),temp[1].end(),'=')>0){

                                                   vector<string>t1=split(temp[1],'=');

                                                   a[i].type=temp[0];
                                                   a[i].name=t1[0];
                                                   a[i].value=t1[1];
                                                   i++;
                                                   }

                               else{

                                                   a[i].type=temp[0];
                                                   a[i].name=temp[1];
                                                   a[i].value="NULL";
                                                   i++;
                                    }
                        }


                 }




    else if(n==2){ //VIEW ELEMENT


                  for(int k=0;k<i;k++){
                                   cout<<a[k].name<<"  "<<a[k].value<<"\t"<<a[k].type<<"\n";
                   }

        }







    else if(n==3){ //DELETE ELEMENT


            string name;
            cout<<"Name for delete"<<endl;
            cin>>name;
            int m;

            for(m=0;m<i;m++){
                            if(a[m].name==name)
                            break;
                            }
            i=i-1;

            for(int j=m;j<i;j++)
                            a[j]=a[j+1];



               }



    else{
        cout<<"Invalid Input Try again"<<endl;
    }






  }


  return 0;
}
