# week02-3.py �g LeetCode
# LeetCode 1. Two Sum
# ���@��Ʀr nums �̭�����Ӭۥ[,�O target
# nums[i] + nums[j] == target ��� i �M j �ϱo�[�_�ӬO target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box = {} # ���@�ӽc�l, �̭���X�{�L���Ʀr
        # �ڭ̷Q�n�H�X target �o�ӥ[�`

        for i, num in enumerate(nums):
            other = target - num # �t�~�@�ӻݭn���� �i�H��X target ��(target-num)
            if other in box: #�b�c�l��, ���t�~�@�ӻݭn����
                return [ box[other], i ] # ��쵪��
            else: #�p�G�S���X�A���Ʀr���
                box[num] = i # �N��{�b���Ʀrnum, ��� box �̭�
