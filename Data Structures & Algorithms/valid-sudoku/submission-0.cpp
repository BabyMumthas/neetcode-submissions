class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Check rows
        for (int r = 0; r < 9; r++) {

            unordered_set<char> seen;

            for (int c = 0; c < 9; c++) {

                if (board[r][c] == '.')
                    continue;

                if (seen.count(board[r][c]))
                    return false;

                seen.insert(board[r][c]);
            }
        }

        // Check columns
        for (int c = 0; c < 9; c++) {

            unordered_set<char> seen;

            for (int r = 0; r < 9; r++) {

                if (board[r][c] == '.')
                    continue;

                if (seen.count(board[r][c]))
                    return false;

                seen.insert(board[r][c]);
            }
        }

        // Check 3x3 boxes
        for (int row = 0; row < 9; row += 3) {

            for (int col = 0; col < 9; col += 3) {

                unordered_set<char> seen;

                for (int r = row; r < row + 3; r++) {

                    for (int c = col; c < col + 3; c++) {

                        if (board[r][c] == '.')
                            continue;

                        if (seen.count(board[r][c]))
                            return false;

                        seen.insert(board[r][c]);
                    }
                }
            }
        }

        return true;
    }
};