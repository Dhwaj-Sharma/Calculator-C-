#include<iostream>
#include<string>
using namespace std;
string input, num1, oper1, oper2, actual_num_1, actual_num_2;
int number1, actual_number_1;


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
    number1 = stoi(num1);
    actual_number_1 = stoi(actual_num_1);
    if(oper1=="+"){
        cout<<number1+actual_number_1<<endl;
    }
    else if(oper1=="-"){
        cout<<actual_number_1-number1<<endl;
    }
    else if(oper1=="*"){
        cout<<number1*actual_number_1<<endl;
    }
    else if(oper1=="/"){
        cout<<actual_number_1/number1<<endl;
    }
}
  
int main()
{
    cout<<"Give the INPUT"<<endl;
    user_input();
    format_input();
    cout<<"The RESULT is: ";
    output_printer();
    return 0;
}

