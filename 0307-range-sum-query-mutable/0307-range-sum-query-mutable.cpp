class NumArray {
public:
    int n;
    vector<int> tree;
    NumArray(vector<int>& nums) {
        n=nums.size();
        tree.resize(4*n);
        build(nums,0,0,n-1);
    }
    void build(vector<int>& nums,int node,int l,int r){
        if(l==r){
            tree[node]=nums[l];
            return;
        }
        int mid=(l+r) >> 1;
        build(nums,2*node+1,l,mid);
        build(nums,2*node+2,mid+1,r);
        tree[node]=tree[2*node+1]+tree[2*node+2];
    }
    void updateTree(int node,int l,int r,int idx,int val){
        if(l==r){
            tree[node]=val;
            return;
        }
        int mid=(l+r) >> 1;
        if(idx <=mid)updateTree(2*node+1,l,mid,idx,val);
        else updateTree(2*node+2,mid+1,r,idx,val);
        tree[node]=tree[2*node+1]+tree[2*node+2];
    }
    void update(int index, int val) {
        updateTree(0,0,n-1,index,val);
    }
    int query(int node,int l,int r,int ql,int qr){
        if(r < ql || l > qr) return 0;
        if(ql<=l && r <=qr) return tree[node];
        int mid=(l+r) >> 1;
        return query(2*node+1,l,mid,ql,qr)+query(2*node+2,mid+1,r,ql,qr);

    }
    int sumRange(int left, int right) {
        return query(0,0,n-1,left,right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */