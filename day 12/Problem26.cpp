#include<iostream>
#include<vector>



using namespace std;

class RandomizedCollection {
     
public:
    vector<int> container = {};
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        
            for(int i = 0; i < container.size(); i++)
            {
                if(container[i] == val)
                {
                    container.push_back(val);
                    return false;
                }
            }         
    container.push_back(val);
    return true;
    }
    
    bool remove(int val) {
        int count =0;
       
            for(int i = 0; i < container.size(); i++)
            {
                if(container[i] == val && count==0)
                {
                    container.erase (container.begin()+i);
                    count++;
                    return true;
                }
            }
            count =0;
        
    return false;

    }
    
    int getRandom() {
        int ans = rand()%container.size();
        return container[ans];
      
    }
};


int main()
{


//  Your RandomizedCollection object will be instantiated and called as such:

RandomizedCollection* obj = new RandomizedCollection();

int val1 = 1;
int val2 = 2;
  bool param_1 = obj->insert(val1);
  bool param_2 = obj->remove(val2);
  int param_3 = obj->getRandom();

  cout<<param_1<<" "<<param_2<<" "<<param_3<<endl;




  
  }