class Solution {
public:
    int reverse(int x) {
        int k = 0; long output = 0;
        for(int i = x; i!=0; i = i/10){
            k++;
        }

        for(k; k>=0; k--){
            int m = x%10;
            output = output + long(m* pow(10,(k-1)));
            x = int(x/10);
        }

        if(output>= -2147483648 && output <= 2147483647 ){
            return output;
        }
        else{
            return 0;
        }
    }
};