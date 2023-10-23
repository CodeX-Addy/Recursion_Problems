 void printSubArray_util(vector<int> nums, int s, int e){
//     //base case
    if(e == nums.size()) return;
    
    //ek case solve krlo
    for(int i=s; i<=e; ++i){
        cout << nums[i] << " ";
    }
    cout << endl;
    
    printSubArray_util(nums, s, e+1);
}

void printSubArray(vector<int> &nums){
    for(int start = 0; start<=nums.size(); ++start){
        int end = start;
        printSubArray_util(nums, start, end);
    }
}
int main(){
    vector<int> v{1,2,3,4,5};
    printSubArray(v);
}
