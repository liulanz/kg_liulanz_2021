#include <iostream>
#include <vector>
using namespace std;

void PrintOutput(const vector<string> & inputs){
    vector<string> nums ={"Zero","One","Two","Thee","Four","Five","Six","Seven","Eight","Nine"};
    for(int i =0; i < inputs.size();i++){
        string ans = "";
        for(int digit = 0; digit < inputs[i].length(); digit++){
            ans+=nums[inputs[i][digit]-'0'];
        }
        if(i!=inputs.size()-1){
            cout <<ans << ", ";
        }
        else{
            cout <<ans<<endl;
        }
    }
}
int main(int argc, char** argv){

    vector<string> inputs;

    for (int i = 1; i < argc; ++i)
        inputs.push_back(argv[i]);
    PrintOutput(inputs);
    return 0;
}