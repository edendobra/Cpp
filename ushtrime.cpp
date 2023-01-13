// #include <iostream>
// using namespace std;
// bool eshteTek(int numri){
//     return numri % 2 != 0;
// }
// int mbledhCift(int totali);
// int main(){
//         int totali;
//         cout << "Shkruaj sa numra deshiron: ";
//         cin >> totali;
//         int shuma = mbledhCift(totali);
//         cout << "Shuma e numrave eshte: " << shuma <<endl;
//         return 0;
// }
// int mbledhCift(int totali){
//     int numri;
//     int shuma = 0;
//     for (int i = 0; i < totali; i++)
//     {
//             cout << "Jepe numrin (" << i + 1;
//             cin >> numri;
//             if (!eshteTek(numri))
//             {
//                 shuma += numri;
//             }
            
//     }
//     return shuma;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     const int x = 3;
//     int mat[x][x];
//     int k = 0;

//     for (int i = 0; i < x; i++)
//     {
//         for (int j = 0; j < x; j++)
//         {
//             mat[i][j] = x * x - k;
//             k++;
//         }
        
//     }
//     for (int i = 0; i < x; i++)
//     {
//         cout << "{ ";
//         for (int j = 0; j < x; j++)
//         {
//             cout << mat[i][j] << ",";
//         }
//         cout << "} \n";
//         }
    
    
//     return 0;
// }

// #include <iostream>
// #include <map>
// #include <vector>
// #include <string.h>
// using namespace std;

// string defangIPaddr(string address) {
//         string eden = "";
//         for (int i=0; i< address.length();i++){
//             if (address.at(i) == '.')   
//             {
//                 eden += "[.]";
//             } else {
//                 eden += address.at(i);
//             }
            
//         }
//         return eden;
        
//     }

// int main(){

//         string address = "123.12.12.1";
//         string result = defangIPaddr(address);
//         cout << result;

//         return 0;
// }

// #include <iostream>
// using namespace std;

// void Biletat(int d1,int d2,int d3,int d4,int d5,int d6,int d7){
//     double fitimi, fitimiJavor = 0, fminmax = 0;
//     int min, max, resmax = 0, resmin = 0;
//     for (int j = 1; j <= 7; j++)
//     {
//         switch (j)
//         {
//         case 1:
//             fitimi = d1 * 3.2;
//             fminmax = d1 * 3.2;
//             min = fminmax;
//             max = fminmax;
//             resmin = j;
//             resmax = j;
//             break;
//         case 2:
//             fitimi = d2 * 3.2;
//             fminmax = d2 * 3.2;
//             break;
//         case 3:
//             fitimi = d3 * 3.2;
//             fminmax = d3 * 3.2;
//             break;
//         case 4:
//             fitimi = d4 * 3.2;
//             fminmax = d4 * 3.2;
//             break;
//         case 5:
//             fitimi = d5 * 3.2;
//             fminmax = d5 * 3.2;
//             break;
//         case 6:
//             fitimi = (d6 * 3.2) * (1 - 0.15);
//             fminmax = d6 * 3.2;
//             break;
//         case 7:
//             fitimi = (d7 * 3.2) * (1 - 0.15);
//             fminmax = d7 * 3.2;
//             break;

//         default:
//             cout << "its me";
//             break;
//         }
//         fitimiJavor += fitimi;
//         cout << "Fitimi per diten " << j << " eshte " << fitimi << endl;
//         if (fminmax > max)
//         {
//             max = fminmax;
//             resmax = j;
//         }
//         if (fminmax < min)
//         {
//             min = fminmax;
//             resmin = j;
//         }
//         fitimi = 0;
//         fminmax = 0;
//         }
                
//         cout << "Fitimi javor: " << fitimiJavor << endl;
//         cout << "Mesatarja e fitimit per dite: " << (fitimiJavor / 7) << endl;
//         cout << "Biletat e shitura gjate diteve te punes: " << d1 + d2 + d3 + d4 + d5 << endl;
//         cout << "Me se paku bileta jane shitur ne diten: " << resmin << endl;
//         cout << "Me se shumti bileta jane shitur ne diten: " << resmax << endl;
    
    
    
// }

// int main(){
//         int d1, d2, d3, d4, d5, d6, d7;
//         for (int i = 1; i <= 7; i++)
//         {
//             cout << "Shkruaj numrin e biletave te shitura per diten " << i << ": ";
//             switch (i)
//             {
//             case 1:
//                 cin >> d1;
//                 break;
//             case 2:
//                 cin >> d2;
//                 break;
//             case 3:
//                 cin >> d3;
//                 break;
//             case 4:
//                 cin >> d4;
//                 break;
//             case 5:
//                 cin >> d5;
//                 break;
//             case 6:
//                 cin >> d6;
//                 break;
//             case 7:
//                 cin >> d7;
//                 break;
            
//             default:
//                 cout << "Hasta la vista";
//                 break;
//             }
//         }
        

//         Biletat(d1, d2, d3, d4, d5, d6, d7);
//         return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// string sortSentence(string s) {
//     int length = s.size();
//     string word = "";
//     string result = "";
//     for (int i = 0; i < length; i++)
//     {
//         for (int j = 0; j < length; j++)
//         {
//             if (s[i] == ' ')
//             {
//                 break;
//             } else {
//                 word += s[i];
//             }
            
//         }
//         result = result + word.pop_back();
//         }
    
//     }

// int main(){
//     string s = "is2 sentence4 This1 a3";
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int prefixCount(vector<string>& words, string pref) {
//     int count = 0;
//     for (int i = 0; i < words.size(); i++)
//     {
//         string word = words[i];
//         int length = pref.size();
//         if (word.substr(0, length) == pref)
//         {
//             count++;
//         }
        
//     }
//     return count;
//         }

// int main(){
//     vector<string> words;
//     words = {"leetcode","win","loops","success"};
//     string pref = "code";

//     int result = prefixCount(words, pref);
//     cout << "Count: " << result << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// void reverseString(vector<char>& s) {
//     int length = s.size();
//     char temp;
//     for (int i = 0, j = (length-1); i < j ; i++, j--)
//     {
//             swap(s[i], s[j]);
        
//     }
//     cout << "{\"";
//     for (int i = 0; i < length; i++)
//     {
//             string lidhesa = (i == length - 1) ? "\"}" : "\",\"";
//             cout << s[i] << lidhesa;
//     }
    
    
//     }

// int main(){
//     vector<char> s;
//     s = {'h', 'e', 'l', 'l', 'o'};
//     reverseString(s);
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int percentageLetter(string s, char letter) {

//     double count = 0;
//     double length = s.size();
//     double result;
//     for (int i = 0; i < length; i++)
//     {
//         if (s[i] == letter)
//         {
//             count++;
//         }
        
//     }
//     result = (count / length);
//     return result * 100;
//         }

// int main(){
//     string s = "foobar";
//     char letter = 'o';

//     int result = percentageLetter(s, letter);
//     cout << result;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// bool digitCount(string num) {
//     int length = num.size();
//     int count = 0;
//     for (int i = 0; i < length; i++)
//     {
//         for (int j = 0; j < length; j++)
//         {
//             if (num.at(i) == j)
//             {
//                 count++;
//             }
            
//         }
//     }
//     return count > 0;
// }
    

// int main(){
//     string nums = "1210";

//     bool result = digitCount(nums);
//     cout << result;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
//     int count = 0;
//     int rows = items.size();
//     int columns = items[0].size();

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             if (ruleKey == "type" && ruleValue == items[i][j] && (i == j || i > j))
//             {
//                 count++;
//             } else if (ruleKey == "color" && ruleValue == items[i][j] && (i == j || i!=0) ){
//                 count++;
//             } else if (ruleKey == "name" && ruleValue == items[i][j] && j>i){
//                 count++;
//             }
            
//         }
        
//     }
//     return count;
//         }

// int main(){

//     vector<vector<string>> items;
//     string ruleKey = "type";
//     string ruleValue = "phone";
//     items = {{"phone","blue","pixel"},{"computer","silver","phone"},{"phone","gold","iphone"}};
//     int result = countMatches(items, ruleKey, ruleValue);
//     cout << result;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

//  string interpret(string command) {
//      string eden = "";
//      for (int i = 0; i < command.size(); i++)
//      {
//          char current = command[i];

//          if (current == ')' && command[i-1] == '(')
//          {
//              eden += 'o';
//          } 
//          if (current == '(' || current == ')'){
//              continue;
//          }
//          eden += current;
//           }

//           return eden;
//     }

// int main(){
//           string command = "G()(al)";
//           string result = interpret(command);
//           cout << result;
//           return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string.h>
// #include <map>
// using namespace std;

//  string restoreString(string s, vector<int>& indices) {
//         map<int, string> together;
//         for (int i=0; i<indices.size();i++){
//             together[indices[i]] = s.at(i);
//         }

//         string result = "";

//         for(int i =0;i<indices.size();i++){
//             result += together[i];
//         }

//         return result;

        
//     }

// int main(){

//         vector<int> indices;
//         string s = "dreni";
//         indices = {4,3,2,1,0};

//         string result = restoreString(s, indices);
//         std::cout << result;

//         return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main(){

//     const int x = 4;

//     int matrica[x][x] = {};

//     int totali = 0;
//     int k = 0;

//     for (int i = 0; i < x; i++)
//     {
//         for (int j = 0; j < x; j++)
//         {
//             matrica[i][j] = 15 - k);
//             k++;
//         }
        
//     }

//     for (int i = 0; i < x; i++)
//     {
//         cout << "{";
//         for (int j = 0; j < x; j++)
//         {
//             string lidhesa = (j == x - 1) ? " " : ",";
//             cout << setw(3) << matrica[i][j] << lidhesa;
//         }
//         cout << "}" << endl;
//         }


    


//     return 0;
// }

// #include <iostream>
// using namespace std;
// int mbledhja(int fillimi, int mbarimi){
//     int shuma = 0;
//     for (int i = fillimi; i < mbarimi; i++)
//     {
//         shuma += i;
//     }
//     return shuma;
// }

// int main(){
//     int fillo, mbaro;

//     cout << "Fillo nga: ";
//     cin >> fillo;
//     cout << "Mbaro tek: ";
//     cin >> mbaro;

//     int x = mbledhja(fillo, mbaro);
//     cout << x;

//     return 0;
// }
// Detyra e pare -------------
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     double siper, poshte, result, n;
//     cout << "Jep vleren per n: ";
//     cin >> n;

//     siper = 12 * n + 36;
//     poshte = pow(n, 2) - 12 * n + 32;

//     result = siper / poshte;

//     cout << "Vlera perfundimtare: " << result;
//     return 0;
// }

// Detyra e dyte
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main(){
//     double k, n, p;
//     k = 2;
//     cout << "Jep vleren per n: ";
//     cin >> n;
//     while(n < k){
//         cout << "Jep nje vlere valide me te madhe se " << k << ": ";
//         cin >> n;
//     }
//      p = 1;
//      for (int i = k; i < n; i++)
//      {
//          p *= (pow((2 * i - 5)*1.0, n*1.0) / (n - 2)); 
//     }
//     cout << "Prodhimi eshte: " << p;

//         return 0;

// Detyra e trete

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){

//     double i, n, s,p=1;
//     i = 2;
//     cout << "Jep vleren per n: ";
//     cin >> n;

//     while(n<i){
//         cout << "Jep vlere valide";
//         cin >> n;
//     }
//     for (int i = 1; i < n; i++)
//     {
//         if (i == 1)
//         {
//             continue;
//         }
        
//         p *= 1 - i;
//     }
    

//     for (i; i < n; i++)
//     {

//         s += (n / p) + sqrt(i);
//     }

//     cout << "Shuma eshte: " << s;
//     return 0;
// }
