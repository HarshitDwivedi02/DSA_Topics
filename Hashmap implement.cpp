class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        //COUNT ONES IN V1
        //PRINT FIRST CUPLI IN V1
        vector<int>v1={1,3,4,5,3,1,1,1};
        map<int , int> count;
        for(int i = 0;i<v1.size(); i++){
            count[v1[i]]++;
            //cout<< i << "is i"<< endl;
        //    cout << count[v1[i]] << endl;
        if(count[v1[i]] == 2){
          ///To print the element which occurs twice first cout << v1[i] << endl;
            break;
        }

        }
        // To print occurence of 1 cout << count[1] << endl;
        
        return 0;
        
    }
};