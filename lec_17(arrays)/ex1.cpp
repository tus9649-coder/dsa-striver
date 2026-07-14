// find the second largest element in the array without sorting
// better approach method
#include <iostream>
#include <vector>
using namespace std;
int second_largest(vector<int> &arr, int n)
{
    int largest = arr[0], slargest = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<largest && arr[i]>slargest)
            slargest=arr[i];
    }
    return slargest;
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

    cout << "second largest element is " << slargest << endl;

    return 0;
}