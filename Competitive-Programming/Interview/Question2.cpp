#include <bits/stdc++.h>

using namespace std;

int findMaxProfit(int n, vector<int> a) {
    int min_indx=0;
    int max_indx=0;
    int sum=0;
    int max_num=0;
    for(int i=1;i<n;i++){
        cout<<a[i]<<" "<<a[min_indx]<<" "<<a[max_indx]<<" "<<sum<<" "<<max_num<<endl;
        if(a[min_indx]<a[i]){
            cout<<"Less"<<endl;
            if(max_num<a[i]-a[min_indx]){
                cout<<"Num"<<endl;
                max_num=a[i]-a[min_indx];
                max_indx=i;
            }
        }
        if(a[min_indx]>=a[i]){
            cout<<"Great"<<endl;
            sum+=max_num;
            min_indx=max_indx+1;
            i=max_indx+1;
            max_indx++;
            max_num=0;
        }
        
    }
    return sum;
}


vector<int> splitStringToInt(const string& str, char delim) {
    vector<int> strings;
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(delim, end)) != string::npos) {
        end = str.find(delim, start);
        strings.push_back(stoi(str.substr(start, end - start)));
    }
    return strings;
}

void printVector(vector<int> vec) {
    for (vector<int>::const_iterator i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << ' ';
    }
    cout << endl;
}

int main() {
    string firstLine;
    getline(cin, firstLine);

    vector<int> firstLineVec = splitStringToInt(firstLine, ' ');
    int numOfPredictedTimes = firstLineVec[0];
    vector<int> predictedSharePrices(firstLineVec.begin()+1, firstLineVec.end());


    int result = findMaxProfit(numOfPredictedTimes, predictedSharePrices);

    // Do not remove below line
    cout << result << "\n";
    // Do not print anything after this line

    return 0;
}
//14 5 1 6 3 2 5 6 1 3 6 2 5 5 10
                   |   |