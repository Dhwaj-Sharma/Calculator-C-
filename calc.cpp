#include<iostream>
#include<string>
using namespace std;
string input, num1, oper1, oper2, actual_num_1, actual_num_2;


void user_input(){
    cin>>input;
}
void format_input(){
    for(int i=0; i<input.length(); i++){
        if(isdigit(input.at(i))){
            // cout<<"yes";
            num1+=input.at(i);
        }
        else{
            oper1=input.at(i);
            actual_num_1=num1;
            num1="";
        }
    }
    // cout<<num1<<endl;
    // cout<<oper1<<endl;
    // cout<<actual_num_1;
    
}

void output_printer(){
    if(oper1=="+"){
        cout<<num1+actual_num_1;
    }
}
  
int main()
{
    user_input();
    format_input();
    return 0;
}
/*if(oper1=="whatever")
num1 whatever actual_num_1*/
