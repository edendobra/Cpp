#include <iostream>
#include <vector>
using namespace std;

 bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1="";
        string w2="";
        bool result;
        for (int i= 0;i<word1.size();i++){
            w1 += word1[i];
        }
        for (int i=0;i<word2.size();i++){
            w2 += word2[i];
        }
        if (w1==w2){
            result = true;
        } else {
            result = false;
        }
        return result;
    }

int main(){

        vector<string> word1;
        vector<string> word2;

        word1 = {"ab", "c"};
        word2 = {"a", "bc"};

        bool result = arrayStringsAreEqual(word1, word2);
        cout << result;
        return 0;
}
//