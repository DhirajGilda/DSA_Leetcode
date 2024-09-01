class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        string even = "bdfh";
        string odd = "aceg";
        
        // Get the numeric part of the coordinates
        int cor1 = coordinate1[1] - '0';  // Subtract '0' to convert char to int
        int cor2 = coordinate2[1] - '0';

        // Determine if the first coordinate is on a black square
        bool black1 = (cor1 % 2 == 0 && even.find(coordinate1[0]) != string::npos) ||
                      (cor1 % 2 != 0 && odd.find(coordinate1[0]) != string::npos);

        // Determine if the second coordinate is on a black square
        bool black2 = (cor2 % 2 == 0 && even.find(coordinate2[0]) != string::npos) ||
                      (cor2 % 2 != 0 && odd.find(coordinate2[0]) != string::npos);

        return black1 == black2;
    }
};