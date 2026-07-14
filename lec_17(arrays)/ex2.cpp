// find the second largest element in the array without sorting
// optimal approach method
#include <iostream>
#include <vector>
using namespace std;
int second_largest(vector<int> &arr, int n)
{
    int largest = arr[0], slargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>largest)
        {
                slargest = largest;
                largest = arr[i];
        }
        else if(arr[i]>slargest && arr[i]!=largest)
        {
            slargest = arr[i];
        }
    }

    return slargest;
}
int second_smallest(vector<int> &arr,int n)
{
    int smallest = arr[0],ssmallest=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<smallest)
        {
            ssmallest= smallest;
            smallest = arr[i];
        }
        else if(arr[i] < ssmallest && arr[i]!=smallest)
        {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}
int main()
{
    // setup array
    int n;
    cin >> n;
    vector<int> ivec;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        ivec.push_back(num);
    }

    // call for second largest
    int slargest = second_largest(ivec, n);
    int ssmallest = second_smallest(ivec,n);

    cout << "second largest element is " << slargest << endl;
    cout<<"second smallest element is "<< ssmallest <<endl;

    return 0;
}