#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int flag=0;
        int n;
        cin >> n;
        char s[10000];
        // string s;
        // scanf("%[^\n]s")
        // getline(cin,s);
        // getline(s,cin);
        scanf(" %[^\n]s",s);
        // cin >> s;
        cout << n <<  endl;
        int k = strlen(s);
        string s1="",s2="",s3="";
        for(int j=0;j<k;j++)
        {
            if(s[j] == ' ' && j+1 < k && s[j+1] == '#' && flag)s1+=s[j];
            if(s[j] == ' ' && j+1 < k && s[j+1] == '#' && !flag)s3+=s[j];
            if(s[j] == ' ' && j+1 < k && s[j+1] >= 'a' && s[j+1] <= 'z'){s2+=s[j];flag=1;}
            if(s[j] == '#' && flag)s1+=s[j];
            if(s[j] == '#' && !flag)s3+=s[j];
            if(s[j] >= 'a' && s[j] <= 'z'){s2+=s[j];flag = 1;}
        }
        if(s1.size() && s1[0] == ' ')s1.erase(s1.begin());
        if(s3.size() && s3[0] == ' ')s3.erase(s3.begin());
        if(s2.size() && s2[0] == ' ')s2.erase(s2.begin());
        if(s1.size())cout << s1 << " ";
        if(s2.size())cout << s2 << " ";
        if(s3.size())cout << s3 << " ";
        cout<<endl;
    }
    return 0;
}
