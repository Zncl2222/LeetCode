class Solution {
public:
    
    void Traverse(vector<vector<int>>& img, int sr, int sc, int origin_color, int newColor){
        
        if(sr<0 || sc<0 || sr>=img.size() || sc>=img[0].size() || img[sr][sc]==newColor || img[sr][sc]!=origin_color)
            return;
        
        img[sr][sc]=newColor;
        
        Traverse(img, sr+1, sc, origin_color, newColor);
        Traverse(img, sr-1, sc, origin_color, newColor);
        Traverse(img, sr, sc+1, origin_color, newColor);
        Traverse(img, sr, sc-1, origin_color, newColor);        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        Traverse(image, sr, sc, image[sr][sc], newColor);
        
        return image;
    }
};