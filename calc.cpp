#include<iostream>
#include<string>
using namespace std;
string input;

void user_input(){
    cin>>input;
}
void format_input(){
    for(int i=0; i<input.length(); i++){
        if(int(input.at(i)).isdigit()){
            cout<<"yes";
        }
    
    }
}
  
int main()
{
    user_input();
    format_input();
    return 0;
}
