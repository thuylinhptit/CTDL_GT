#include <bits/stdc++.h>
using namespace std;
int a[100][100];
vector<int> s[100];
int res[100][100];
main()
{
    int l1[]={-2,-1,1,2};
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            res[i][j]=0;
        }
        s[i].clear();
    }
    ofstream out;
    out.open(" matran.out"); 
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            a[i][j] = (i - 1) * 8 + j;
        }
    }
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cout<<a[i][j]<<" ::";
            for (int x = 0; x <=3; x++)
            {
                for (int y = 0; y <= 3; y++)
                {
                    
                    if (abs(l1[x])==abs(l1[y])){
                        continue;
                    }
                    else{
                        
                        if(i+l1[x]<=8 && i+l1[x]>=1 && j+l1[y] <=8 && j+l1[y] >=1 ){
                            cout<<l1[x]<<" "<<l1[y]<<"      ";
                            cout<<a[i+l1[x]][j+l1[y]]<<" ";  
                            res[a[i][j]][a[i+l1[x]][j+l1[y]]]=1; 
                        }
                        
                    }    
                }
            }
            cout<<endl;
        }
    }
    for (int i = 1; i <= 64; i++)
    {
        for(int j=1;j<=64;j++){
            out<<res[i][j]<<" ";
        }
        out<<endl;
    }
}

