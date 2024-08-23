class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        for arr in image:
            arr.reverse()
            for i in range(len(arr)):
                if arr[i]==0:
                    arr[i]=1
                elif arr[i] ==1:
                    arr[i]=0
        return image



        #     arr[i] = 1 if arr[i] == 0 else 0
