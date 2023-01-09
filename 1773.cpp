#include <iostream>
#include <string>
#include <vector>
using namespace std;

int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    int count = 0;
    int rows = items.size();
    int columns = items[0].size();

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (ruleKey == "type" && ruleValue == items[i][j] && (i == j || i > j))
            {
                count++;
            } else if (ruleKey == "color" && ruleValue == items[i][j] && (i == j || i!=0) ){
                count++;
            } else if (ruleKey == "name" && ruleValue == items[i][j] && j>i){
                count++;
            }
            
        }
        
    }
    return count;
        }

int main(){

    vector<vector<string>> items;
    string ruleKey = "type";
    string ruleValue = "phone";
    items = {{"phone","blue","pixel"},{"computer","silver","phone"},{"phone","gold","iphone"}};
    int result = countMatches(items, ruleKey, ruleValue);
    cout << result;
    return 0;
}