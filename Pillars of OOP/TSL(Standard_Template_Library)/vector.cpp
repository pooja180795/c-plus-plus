/*  vector is implemented as  dynamic array so random access is possible    */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    vector<int> vec = {1,22,3,4,5};
    vector<int> vec2(5,-1);        // -1 -1 -1 -1 -1
    vector<int> vec3(vec);         // 1 2 3 4 5
    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;
    // vec.emplace_back(6.5);          // if current size is not enough then new vector of double size created then all element+new elemnt wiil be copied in it
    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;

    // for(int val : vec3){
    //     cout << val << " ";
    // }

    //erase
    // vec3.erase(vec3.begin(), vec3.begin()+3);  //[0,3) = 0 to 2
    // for(int val : vec3){
    //     cout << val << " ";
    // }
    // cout << endl;
    // cout << vec3.size() << endl;
    // cout << vec3.capacity() << endl;
    // vec3.pop_back();
    // cout << vec3.size() << endl;
    // cout << vec3.capacity() << endl;
    // vec3.pop_back();
    
    // insert
    // vec.insert(vec.begin()+1, 100);  //position and value
    // for(int val : vec){
    //     cout << val << " ";
    // }
    // cout << endl;
    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;
    

    //clear an empty
    // cout << "is empty? " << vec.empty() << endl;
    // //vec.clear();
    
    // cout << "size = " << vec.size() << endl;
    // cout << "is empty? " << vec.empty() << endl;
    // cout << "capacity = " << vec.capacity() << endl;

    // for(int val : vec){
    //     cout << val << " ";
    // }

    // cout << endl;
    // cout << *(vec.end() - 1) << endl;        //vec.end() points to n (not n-1)

    //iterator
    // vector<int>:: iterator it;
    // for(it = vec.begin(); it != vec.end(); it++){
    //     cout << *it << endl;
    // }
    vector<int>:: reverse_iterator itr;
    for(auto itr = vec.rbegin(); itr != vec.rend(); itr++){         // ++ instead of -- as per convention
        cout << *itr << " ";
    }
    cout << endl;

    for(int val : vec3){
        cout << val << " ";
    }
    cout << endl;
    
    sort(vec3.begin(), vec3.end(), greater<int>());  // for reverse order sorting

    for(int val : vec3){
        cout << val << " ";
    }
    cout << endl;

    return 0;


}