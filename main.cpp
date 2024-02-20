#include <iostream>
#include <vector>
using namespace std;

string Caesar(const string& word, const vector<int>& vec) {
    string ans = word;
    for(int i=0; i<word.size(); i++) {
        if(isalpha(word[i]) && islower(word[i])) {
            //lowercase
            int n = word[i];
            ans[i] = 'a' + ((n-'a')+vec[i%vec.size()])%26;
        }
        else if(isalpha(word[i])) {
            //uppercase
            int n = word[i];
            ans[i] = 'A' + ((n-'A')+vec[i%vec.size()])%26;
        }
        else if(isnumber(word[i])) {
            //numbers
            int n = word[i];
            ans[i] = '0' + ((n-'0')+vec[i%vec.size()])%10;
        }
    }
    return ans;
}



int main()
{
    cout << Caesar("AAAAAaaaaa11111", {1,2,3,4,5});
    cout << Caesar("A1a", {26,10,26});
    return 0;
}
// A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z.