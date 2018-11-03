//
//  main.cpp
//  洛谷NOIP
//
//  Created by 韩枫 on 2018/11/3.
//  Copyright © 2018年 韩枫. All rights reserved.
//

#include <iostream>

using namespace std;

int map[1000];

int search(int n){
    if(map[n]!= 0) return map[n];
    int ans= 1;
    
    for(int i= 1;i<= n/2;i++) ans+= search(i);
    map[n]= ans;
    return ans;
    
}

int main() {
    int n;//, times= 0;
    
    cin>> n;
    cout<< search(n);
    return 0;
}
