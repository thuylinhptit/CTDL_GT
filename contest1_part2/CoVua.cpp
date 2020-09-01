#include <bits/stdc++.h>
using namespace std;
int a[100][100];
vector<int> s[100];
int res[100][100];
main()
{
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            res[i][j]=0;
        }
        s[i].clear();
    }
    ofstream out;
    out.open("king.out"); 
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
            for (int x = -1; x <=1; x++)
            {
                for (int y = -1; y <= 1; y++)
                {
                    
                    if (x==y && x==0){
                        continue;
                    }
                    else{
                        if(i+x<=8&&i+x>=1&&j+y<=8&&j+y>=1){ 
                            res[a[i][j]][a[i+x][j+y]]=1; 
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
