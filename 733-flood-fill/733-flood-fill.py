class Solution:
    
    def Traverse(self, img, sr, sc, origin_color, newColor):
        
        if(sr<0 or sr>=len(img) or sc<0 or sc>=len(img[0]) or img[sr][sc]!=origin_color or img[sr][sc]==newColor):
            return 0
        
        img[sr][sc]=newColor
        
        self.Traverse(img, sr+1, sc, origin_color, newColor)
        self.Traverse(img, sr-1, sc, origin_color, newColor)
        self.Traverse(img, sr, sc+1, origin_color, newColor)
        self.Traverse(img, sr, sc-1, origin_color, newColor)
    
    
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        
        
        self.Traverse(image, sr, sc, image[sr][sc], newColor)
        
        return image