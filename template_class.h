// 1. Say "Hello word"


#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <stdlib.h>
#include <regex.h>
using namespace std;

class TemplateClass {
    private:
 
    public:
        // Constructor (phương thức khởi tạo)
        TemplateClass(){};

        // Destructor (phương thức hủy)
        ~TemplateClass() {};

        string solution1(string s){
            string result = "Hello";
            
            return result;
        }

        string solution2(string s){
            string result = "Hello";

            return result;
        }

        string solution3(string s){
            string result = 0;
            
            return result;
        }
        
        string resolveFunction(string s) {
            return solution1(s);
            return solution2(s);
            return solution3(s); 
        }

        void testFunction() {
            int countPassed = 0;
            vector<string> datas = {"Hello", "Hello"};
            vector<string> expecteds = {"Hello", "Hello"};

            for(int i = 0; i < datas.size(); i++){
                cout << "=================== Begin - Test case #" << i << " ====================" << endl;
                string s = datas.at(i);
                string expected = expecteds.at(i);
                cout << "s: " << s << endl;
                cout << "expected: " << expected << endl;
                
                string result = resolveFunction(s);
                cout << "result: " << result << endl;

                if (result == expected) {
                    countPassed ++;
                    cout << "============> PASSED" << endl;
                } else {
                    cout << "============> FAILED" << endl;
                }
                cout << "=================== End - Test case #" << i << " ====================" << endl;
            }
            cout << "Passed: " << countPassed <<"/" << expecteds.size() << endl;
        }
};