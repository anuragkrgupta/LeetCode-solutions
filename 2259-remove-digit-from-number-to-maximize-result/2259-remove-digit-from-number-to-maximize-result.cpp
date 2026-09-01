class Solution {
public:
    string removeDigit(string number, char digit) {
        for(int i = 0; i<number.length(); i++){
        if(number[i] == digit){
            if(i+1 < number.length() && number[i]< number[i+1]){
                number.erase(i, 1);
                return number;
            }
        }
        
    }
    int i = number.rfind(digit);
    number.erase(i, 1);
    return number;
    }
};