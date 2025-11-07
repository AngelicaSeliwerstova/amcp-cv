#include <vector>
#include <iostream>
std::vector<int> factor(unsigned long long n){
    unsigned long long old_n=n;
    unsigned long long counter=0;
    unsigned long long factorials[13] = {1,2,6,24,120,720, 5040,40320,362880,3628800,39916800,479001600,6227020800};
    std::vector<int> vec;
    for(int i=12; i>=0; i--){
        unsigned long long delta = factorials[i];
        while(n>=delta){
                n-=delta;
                counter+=1;
            };
            if(old_n>=delta){
                vec.push_back(counter);
            }
            
        counter=0;
    }
    return vec;
}
int main(){
    unsigned long long n;
    std::cin>>n;
    std::vector<int> vec = factor(n);
    for(int j=0;j<vec.size();j++){
        std::cout<<vec[j]<<".";
    }

}