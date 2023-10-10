class LRUCache {
public:
    map<int,int>mpp;
    map<int,list<int>::iterator>address;
    list<int>l;
    int cap;
    int siz;
    LRUCache(int capacity) {
        cap=capacity;
        siz=0;
    }
    
    int get(int key) {
        if(mpp.find(key)==mpp.end())
        return -1;

        else
        {

        list<int>::iterator it=address[key];
        int ans=mpp[key];
        l.erase(it);
        address.erase(key);
        l.push_front(key);
        address[key]=l.begin();
        return ans;
        }
    }
    
    void put(int key, int value) {
        if(mpp.find(key)!=mpp.end()){
            l.erase(address[key]);
            address.erase(key);
            mpp.erase(key);
            siz--;
        }
        if(siz==cap){
            int k=l.back();
            l.pop_back();
            address.erase(k);
            mpp.erase(k);
            siz--;
        }
        siz++;
        l.push_front(key);
        address[key]=l.begin();
        mpp[key]=value;
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */