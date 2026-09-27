int maxLen(int nums[]){

    map<int,int>mpp;
    int maxi=0;
    int sum=0;
    for(int i=0; i<=nums.size(); i++){
        sum = sum + nums[i];
        if(sum==0){
            maxi=i+1;
        }
        else{
            if(mpp.find(sum)!=mpp.end()){
                maxi = max(maxi,i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
        }
    }

}