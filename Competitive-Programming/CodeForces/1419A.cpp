#include <iostream>
using namespace std;
int t;

int main()
{
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        int flag1 = 1, flag2 = 1;
        cin >> s;

        if (n % 2) {
            for (int i = 0; i < n;i++){
                if(i%2==0){
                    int temp = s[i] - '0';
                    if (temp%2){
                        cout << 1 << endl;
                        flag1 = 0;
                        break;
                    }
                }
            }
            if(flag1)
                cout << 2 << endl;
        } else {
            for (int i = 0; i < n;i++){
                if(i%2){
                    int temp = s[i] - '0';
                    if(temp%2==0){
                        cout << 2 << endl;
                        flag2 = 0;
                        break;
                    }
                }
            }
            if(flag2)
                cout << 1 << endl;
        }

    }

}