#include<bits/stdc++.h>
#include<math.h>
using namespace std;
class Solution{
    public:
    vector<int> changeBits(int N){
        int count=0;
        int temp=N;
        while(temp>0){
            count++;
            temp /= 2;
        }
        int newNu = pow(2,count)-1;
        vector<int> ans;
        ans.push_back(abs(newNu - N));
        ans.push_back(newNu);
        return ans;
    }
};
int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;

       

    }
    return 0;
}

gcloud iam service - accounts create sqlserver2dc - credentials-- display - name "Service Account for SQLServer to Data Catalog connector" --project qwiklabs - gcp - 02 - dd4012e34281

                                                                                                                                                                               gcloud config set project qwiklabs -
    gcloud config set projectqwiklabs - gcp - 02 - dd4012e34281 student - 00 - 2b0b56ab2cf4

    gcloud config set project qwiklabs-gcp-00-d3be704981cc