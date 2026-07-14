#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>&arr,int low,int middle,int high)
{
    int left = low,right = middle+1;
    vector<int> temp;
    while(left<=middle && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=middle)
    {
         temp.push_back(arr[left]);
            left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
}

void merge_sort(vector<int> &arr,int low,int high)
{
    if(low>=high)
    return;
    int middle = (low + high)/2;
    merge_sort(arr,low,middle);
    merge_sort(arr,middle+1,high);
    merge(arr,low,middle,high);

}

int main()
{
    //setup vector

    vector<int> ivec;
    int n,num;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        ivec.push_back(num);
    }
    

    //now sort using merge sort.
    merge_sort(ivec,0,n-1);

    //print sorted array

    for(const auto &x:ivec)
    {
        cout<<x<<" ";
    }

    return 0;
}