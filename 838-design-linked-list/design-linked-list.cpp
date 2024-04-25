class MyLinkedList {
public:
   vector<int>ans;
    MyLinkedList() {
    }
    int get(int index) {
      if(index >= ans.size()){
        return -1;

      }
      return ans[index];
      }   
    
    void addAtHead(int val) {
    ans.insert(ans.begin(),val);
    }
    void addAtTail(int val) {
      ans.push_back(val);   
    }
    void addAtIndex(int index, int val) {
       if(index < ans.size())
        ans.insert(ans.begin()+index,val);
         else if(index==ans.size())
          ans.push_back(val);
    }
    void deleteAtIndex(int index) {
       if(index < ans.size())
       ans.erase(ans.begin()+index); 
    }
};