class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = n*n;
        int sumEven = sumOdd + n;
        while(sumOdd>0){
            int rem = sumEven % sumOdd;
            sumEven = sumOdd;
            sumOdd = rem;
        }
        return sumEven;
    }
};