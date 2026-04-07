class Robot {
public:
    int width, height;
    pair<int, int> curPos;
    string curDir;
    Robot(int width, int height) {
        this->width = width;
        this->height = height;
        curPos = {0, 0};
        curDir = "East";
    }

    void step(int num) {
        int perimeter = 2 * (width + height) - 4;

        num %= perimeter;
        if (num == 0)
            num = perimeter;

        while (num--) {
            if (curDir == "East") {
                if (curPos.first + 1 < width)
                    curPos.first++;
                else {
                    curDir = "North";
                    num++;
                }
            } else if (curDir == "North") {
                if (curPos.second + 1 < height)
                    curPos.second++;
                else {
                    curDir = "West";
                    num++;
                }
            } else if (curDir == "West") {
                if (curPos.first - 1 >= 0)
                    curPos.first--;
                else {
                    curDir = "South";
                    num++;
                }
            } else {
                if (curPos.second - 1 >= 0)
                    curPos.second--;
                else {
                    curDir = "East";
                    num++;
                }
            }
        }
    }

    vector<int> getPos() {
        vector<int> pos = {curPos.first, curPos.second};
        return pos;
    }

    string getDir() { return curDir; }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */