#include <iostream>
#include <string>

using namespace std;


string defangIPaddr(string address) {
        string eden = "";
        for (int i=0; i< address.length();i++){
            if (address.at(i) == '.')   
            {
                eden += "[.]";
            } else {
                eden += address.at(i);
            }
            
        }
        return eden;
        
    }

int main(){

     string address = "1.1.1.1";
        string result = defangIPaddr(address);
        cout << result;

        return 0;
}
//