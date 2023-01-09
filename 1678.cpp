#include <iostream>
#include <vector>
#include <string>

using namespace std;

 string interpret(string command) {
     string eden = "";
     for (int i = 0; i < command.size(); i++)
     {
         char current = command[i];

         if (current == ')' && command[i-1] == '(')
         {
             eden += 'o';
         } 
         if (current == '(' || current == ')'){
             continue;
         }
         eden += current;
          }

          return eden;
    }

int main(){
          string command = "G()(al)";
          string result = interpret(command);
          cout << result;
          return 0;
}