#include <iostream>
#include<cstring>
#include<climits>
#include<vector>

using namespace std;
int mincost(int i, int pencil,vector<vector<int>> costs, int n ){
    int c = INT_MAX;
    
    if(i==n){
        return 0;
    }
    else{
               if(pencil==1 || i==0){
                
                  c = min(c, costs[i][1] + mincost(i+1,2,costs,n));
                  c = min(c, costs[i][2] + mincost(i+1,3,costs,n));
                  
                
               }
               else if(pencil==2 || i==0){
                
                  c = min(c, costs[i][0] + mincost(i+1,1,costs,n));
                  c = min(c, costs[i][2] + mincost(i+1,3,costs,n));
                  
                
               }
               else if(pencil==3 || i==0){
                
                  c = min(c, costs[i][0] + mincost(i+1,1,costs,n));
                  c = min(c, costs[i][1] + mincost(i+1,2,costs,n));
                  
                
               }
              
    
    return c;
    }
}


int main()
{
    
    int n;
    cin>>n;
    vector<vector<int>> costs;
    for(int i =0; i<n; i++){
            vector<int> c;
            for(int j=0; j<3; j++){
                int a;
                cin>>a;
                c.push_back(a);
            }
            //cin>>c1>>c2>>c3;
            costs.push_back(c);
        
    }
    
    int minc;
    minc = mincost(0,0, costs,n);
    cout<<minc;
    return 0;
}
