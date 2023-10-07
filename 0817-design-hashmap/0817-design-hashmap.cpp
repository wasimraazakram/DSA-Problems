class MyHashMap {
public:
vector<list<pair<int,int>>>mh;
int siz;
    MyHashMap() {    
       siz=10000;
        mh.resize(siz);      
    }

    int hash(int key){
        return key%siz;
    }

    list<pair<int,int>> :: iterator search(int key){
        int i=hash(key);
        list<pair<int,int>> :: iterator it=mh[i].begin();
        while (it!=mh[i].end()){
            if(it->first==key)
            return it;

            it++;
        }
        return it;
    }
    
    void put(int key, int value) {
        int i=hash(key);
        remove(key);
        mh[i].push_back({key,value});
        
    }
    
    int get(int key) {
        int i=hash(key);
         list<pair<int,int>> :: iterator it=search(key);
         if(it==mh[i].end())
         return -1;

         else
         return it->second;
    }
    
    
    void remove(int key) {
        int i=hash(key);
        list<pair<int,int>> :: iterator it=search(key);
        if(it!=mh[i].end()){
            mh[i].erase(search(key));
        }
        
    }
    
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */