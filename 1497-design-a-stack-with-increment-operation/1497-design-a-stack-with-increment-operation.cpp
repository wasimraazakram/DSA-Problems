class CustomStack {
public:
    int arr[1000];
    int top=0;
    int max=0;

    CustomStack(int maxSize) {
        max=maxSize;
    }
    
    void push(int x) {
        if(top<max){
            arr[top]=x;
            top++;
        }

    }
    
    int pop() {
        if(top>0){
            top--;
            return arr[top];    
        }
        else
        return -1;
    }
    
    void increment(int k, int val) {
        if(k<top){
            for(int i=0;i<k;i++)
            arr[i]+=val;
        }
        else{
            for(int i=0;i<top;i++)
            arr[i]+=val;
        }
 
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */