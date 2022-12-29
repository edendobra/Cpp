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

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Jepe vleren per n: ";
    cin >> n;//78

    int shuma = 0;
    for (int i = 2; i <= n; i++)
    {
        if (i+1>4)
        {
            break;
        }

        shuma = shuma + 3 * i - 1;
        cout << "Shuma: " << shuma << endl;//13
    }
    

    return 0;
}
