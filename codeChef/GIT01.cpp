#include<iostream>

using namespace std;


int main(){
    char arr1[100][100],arr2[100][100];
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; ++j){
            if((i+j)%2==0){
                arr1[i][j]='R';
                arr2[i][j]='G';
            }else{
                arr1[i][j]='G';
                arr2[i][j]='R';
            }
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int cost1 = 0;
        int cost2 = 0;
        for(int i = 0; i < n; ++i){
            string str;
            cin >> str;
            for(int j = 0; j < m; ++j){
                if(str[j]!=arr1[i][j]){
                    if(str[j]=='R')cost1+=5;
                    else if(str[j]=='G')cost1+=3;
                }
                if(str[j]!=arr2[i][j]){
                    if(str[j]=='R')cost2+=5;
                    else if(str[j]=='G')cost2+=3;
                }
            }
        }
        if(cost1>cost2)cout << cost2 << "\n";
        else{
            cout << cost1 << "\n";
        }
        //cout << (cost1>cost2)?cost2:cost1;
    }
return 0;
}

/*#include<bits/stdc++.h>

using namespace std;

/*int getCost(vector<string> vec, int n){
    //when first cherry should be red
    string tmp;
    char c = 'G';
    char ctmp = 'G';
    int costR = 0;
    for(vector<string>::iterator itr = vec.begin(); itr != vec.end(); ++itr){
        tmp = *itr;
        ctmp = c;
        if(c == 'R')c = 'G';
        else if(c == 'G')c = 'R';
        if(tmp[0]!=c){
            if(c == 'R')costR+=5;
            if(c == 'G')costR+=3;
        }
        for(int i = 1; i < tmp.length(); ++i){
            if(tmp[i]!=ctmp){
                if(c == 'R')costR+=5;
                if(c == 'G')costR+=3;
            }
            if(ctmp == 'R')ctmp = 'G';
            else if(ctmp == 'G')ctmp = 'R';
        }
    }
        c = 'R';
        ctmp = 'R';
        int costG = 0;
        for(vector<string>::iterator itr = vec.begin(); itr != vec.end(); ++itr){
            tmp = *itr;
            ctmp = c;
            if(c == 'R')c = 'G';
            else if(c == 'G')c = 'R';
            if(tmp[0]!=c){
                if(c == 'R')costG+=5;
                if(c == 'G')costG+=3;
            }
            for(int i = 1; i < tmp.length(); ++i){
                if(tmp[i]!=ctmp){
                    if(c == 'R')costG+=5;
                    if(c == 'G')costG+=3;
                }
                if(ctmp == 'R')ctmp = 'G';
                else if(ctmp == 'G')ctmp = 'R';
            }
        }
return (costR>costG)?costG:costR;
}


int costGreen(string a){
int cost = 0;
    for(int i = 0; i < a.length(); ++i){
        if(i%2==0){
            if(a[i]!='G')cost+=5;
        }
        else if(i%2==1){
            if(a[i]!='R')cost+=3;
        }
    }
return cost;
}

int costRed(string a){
int cost = 0;
    for(int i = 0; i < a.length(); ++i){
        if(i%2==0){
            if(a[i]!='R')cost+=3;
        }
        else if(i%2==1){
            if(a[i]!='G')cost+=5;
        }
    }
return cost;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int costR = 0;
        int costG = 0;
        vector<string> vec;
        int a,b;
        int sum = 0;
        cin >> a >> b;
        string tmp = "";
        for(int i = 0; i < a; ++i){
            string str;
            cin >> str;
            if(i%2 == 0){
                costR+=costRed(str);
                costG+=costGreen(str);
            }
            if(i%2 == 1){
                costR+=costGreen(str);
                costG+=costRed(str);
            }
        }

        int ans = (costR<costG)?costR:costG;
        cout << ans;
    }
return 0;
}
*/
