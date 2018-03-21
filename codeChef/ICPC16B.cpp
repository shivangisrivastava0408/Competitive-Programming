    #include<iostream>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int one_count = 0;
            int minus_one_count = 0;
            int zero_count = 0;
            int else_count = 0;
            int n;
            cin >> n;
            int *arr = new int[n];
            for(int i = 0; i < n; ++i){
                cin >> arr[i];
                if(arr[i]==0)zero_count++;
                else if(arr[i]==1)one_count++;
                else if(arr[i]==-1)minus_one_count++;
                else {else_count++;}
            }
            if(else_count > 1)cout << "no\n";
            else if(minus_one_count && else_count) cout << "no\n";
            else if(minus_one_count ==1 && zero_count) cout << "yes\n";
            else if(minus_one_count>1 && !one_count) cout << "no\n";
            else{cout << "yes\n";}
        }
    return 0;
    }