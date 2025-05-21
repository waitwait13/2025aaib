// week14-4.cpp
// LeetCode 73. Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(),N = matrix[0].size(); // ��M�kN
        vector<int> left(M),up(N); // �������, �W������C++�}�C
        for(int i=0;i<M;i++){ // ���� i �d��O M
            for(int j=0;j<N;j++){ // �k�� j �d��O N
                if(matrix[i][j]==0){
                    left[i] = 7; // ���Ĥ�
                    up[j] = 7; // ���Ĥ�
                }
            }
        }
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(left[i] == 7 || up[j] == 7) matrix[i][j] = 0;
            } // �J�쥪�䦳�Ĥ� or �W�����Ĥ�, �N�⥦�]��0
        }
    }
};
