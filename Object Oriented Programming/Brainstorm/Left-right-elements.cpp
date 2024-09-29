   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;

/*

Given an unsorted array of arr. Find the first element in an array such that all of its left elements are smaller and all right 
elements of its are greater than it.

Note: Return -1 if there is no such element.

Examples : 

Input: arr = [4, 2, 5, 7]
Output: 5
Explanation: Elements on left of 5 are smaller than 5 and on right of it are greater than 5.
Input: arr = [11, 9, 12]
Output: -1
Explanation: As no element here which we can say smaller in left & greater in right.

*/


int findElement(vector<int> &arr) 
{
        int st = 0;
        int el = -1;
        bool left = false;
        bool right = false;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(arr[j]<arr[i]) left = true;
                if(arr[j]>arr[i]) left = false;
            }
            if(left)
            {
                for(int k=i+1;k<arr.size();k++)
                {
                    if(arr[k]>arr[i]) right = true;
                    if(arr[k]<arr[i]) right = false;
                }
            }
            if(left && right) el = arr[i];
        }
        
        return el;
    }


main(){
    vector<int>arr = {56 ,61 ,55 ,84 ,51 ,26 ,51 ,23 ,44 ,68};
    cout<<findElement(arr);

 return 0;
 }