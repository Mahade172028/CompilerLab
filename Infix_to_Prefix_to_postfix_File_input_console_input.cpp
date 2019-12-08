#include<bits/stdc++.h>
#include<string>
#include <fstream>
#include <iostream>
using namespace std;


int prec(char c)
{
    if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}


string infixToPostfix(string s)
{
    std::stack<char> st;
    st.push('N');
    int l = s.length();
    string ns;
    for(int i = 0; i < l; i++)
    {

        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')||(s[i] >= '1' && s[i] <= '9'))
        ns+=s[i];


        else if(s[i] == '(')

        st.push('(');


        else if(s[i] == ')')
        {
            while(st.top() != 'N' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
               ns += c;
            }
            if(st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }
        else if(s[i]=='^')
            st.push(s[i]);

        else{
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top()))
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            st.push(s[i]);
        }

    }

    while(st.top() != 'N')
    {
        char c = st.top();
        st.pop();
        ns += c;
    }


    return ns;

}



bool isOperator(char x)
{
    switch (x) {
    case '+':
    case '-':
    case '/':
    case '*':
    case '^':

        return true;
    }
    return false;
}


string postToPre(string post_exp)
{
    stack<string> s;


    int length = post_exp.size();


    for (int i = 0; i < length; i++) {


        if (isOperator(post_exp[i])) {


            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();


            string temp = post_exp[i] + op2 + op1;


            s.push(temp);
        }


        else {


            s.push(string(1, post_exp[i]));
        }
    }


    return s.top();
}









int main()
{
    while(true)
    {
           cout<<"1.Console Input\n2.File Input\n3.Exit"<<endl;
           int n1,n2;
           cin>>n1;

           if(n1==1)
           {
                string exp ;//= "a+b*(c^d-e)^(f+g*h)-i";
                cout<<"Enter Expression:"<<endl;
                cin>>exp;
                cout<<"1.Infix To Postfix\n2.Infix To Prefix"<<endl;
                cin>>n2;
                if(n2==1)
                {
                    cout<<infixToPostfix(exp)<<endl;
                }
                else if(n2==2)
                {
                    string ex;
                    ex=infixToPostfix(exp);
                    cout<<postToPre(ex)<<endl;
                }


           }
           else if(n1==2)
           {
               string exp,Fname;
               cout<<"File Name"<<endl;

               cin>>Fname;
               ifstream myfile;
               myfile.open(Fname.c_str());
               getline(myfile,exp);
               myfile.close();
               cout<<exp<<endl;

                cout<<"1.Infix To Postfix\n2.Infix To Prefix"<<endl;
                cin>>n2;

                if(n2==1)
                {
                    cout<<infixToPostfix(exp)<<endl;

                }
                else if(n2==2)
                {
                    string ex;
                    ex=infixToPostfix(exp);
                    cout<<postToPre(ex)<<endl;


                }


           }
           else break;

    }

    return 0;
}
