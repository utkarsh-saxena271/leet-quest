class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int ans = 0;
        int L = 0;
        int count = 0;
        int R = 0;
        for(int i = 0; i < moves.size(); i++){
             if(moves[i] == 'L'){
                L++;
             }else if(moves[i] == 'R'){
                R++;
             }else if(moves[i] == '_'){
                count++;
             }
        }
        if(L >= R){
            ans = L + count - R;
        }else{
            ans = R + count - L;
        }

        return abs(ans);
    }
};