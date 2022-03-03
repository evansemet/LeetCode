class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color = image[sr][sc];
        if (newColor == color) return image;
        search(image, sr, sc, newColor, color);
        return image;
    }
    
    void search(vector<vector<int>>& image, int r, int c, int newColor, int color) {
        if (image[r][c] == color) {
            image[r][c] = newColor;
            if (r + 1 < image.size()) search(image, r + 1, c, newColor, color);
            if (r >= 1) search(image, r - 1, c, newColor, color);
            if (c + 1 < image[0].size()) search(image, r, c + 1, newColor, color);
            if (c >= 1) search(image, r, c - 1, newColor, color);
        }
    }
    
};
