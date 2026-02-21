class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int countPrime = 0;
        for (int i = left; i <= right; i++) {
            int countSet = 0;
            int n = i;
            while (n != 0) {
                countSet += (n & 1);
                n = n >> 1;
            }

            if (countSet < 2){continue;}
            bool isPrime = true;
            int sqrtNum = (int)sqrt(countSet);
            for (int j = 2; j <= sqrtNum; j++) {
                if (countSet % j == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime) countPrime++;
        }
        return countPrime;
    }
};