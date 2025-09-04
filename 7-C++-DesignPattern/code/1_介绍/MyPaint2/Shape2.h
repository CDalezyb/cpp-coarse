class Shape {
public:
    virtual void Draw(const Graphics &g) = 0;
    virtual ~Shape() {
    }
};

class Point {
public:
    int x;
    int y;
};

class Line : public Shape {
public:
    Point start;
    Point end;

    Line(const Point &start, const Point &end) {
        this->start = start;
        this->end = end;
    }

    // ʵ���Լ���Draw�������Լ�
    virtual void Draw(const Graphics &g) {
        g.DrawLine(Pens.Red,
                   start.x, start.y, end.x, end.y);
    }
};

class Rect : public Shape {
public:
    Point leftUp;
    int width;
    int height;

    Rect(const Point &leftUp, int width, int height) {
        this->leftUp = leftUp;
        this->width = width;
        this->height = height;
    }

    // ʵ���Լ���Draw�������Լ�
    virtual void Draw(const Graphics &g) {
        g.DrawRectangle(Pens.Red,
                        leftUp, width, height);
    }
};

// ����
class Circle : public Shape {
public:
    // ʵ���Լ���Draw�������Լ�
    virtual void Draw(const Graphics &g) {
        g.DrawCircle(Pens.Red,
                     ...);
    }
};
