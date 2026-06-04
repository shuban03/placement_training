#include <iostream>
using namespace std;

// int main()
// {
//     int arr[] = {2,7,11,15};
//     int n =sizeof(arr) / sizeof(arr[0]);
//     int target = 9;
//     int i = 0;
//     int j = n - 1;
//     while (i < j)
//     {
//         int sum = arr[i] + arr[j];
//         if (sum == target)
//         {
//             cout << i << "," << j << endl;
//             break;
//         }
//         else if (sum > target)
//         {
//             j--;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     return 0;
// }

// int main(){
//     vector<int> arr = {2, 7, 11, 15};
//     unordered_set<int> present;
//     int n = arr.size();
//     int target = 9;
//     for(int i=0;i<n;i++){
//         present.insert(arr[i]);
//         int diff=target-arr[i];
//         if(present.find(diff)!=present.end()){
//             cout<<i<<","<<diff<<endl;
//             break;
//         }


//     }

//}


int main(){
   int maxi=0;
   int sum=0;
   int left=0;
   for(int i=0;i<k;i++){
    sum+=arr[i];
}
maxi=max(max,sum);
for(int i=k;l<nums.size();i++){
    sum-=[left++];
    sum+=nums[i];
    maxi=max(maxi,sum);
}