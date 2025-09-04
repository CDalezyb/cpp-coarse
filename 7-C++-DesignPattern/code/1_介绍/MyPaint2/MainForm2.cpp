class MainForm : public Form {
private:
    Point p1;
    Point p2;

    // ���������״
    vector<Shape *> shapeVector;

public:
    MainForm() {
        //...
    }

protected:
    virtual void OnMouseDown(const MouseEventArgs &e);
    virtual void OnMouseUp(const MouseEventArgs &e);
    virtual void OnPaint(const PaintEventArgs &e);
};

void MainForm::OnMouseDown(const MouseEventArgs &e) {
    p1.x = e.X;
    p1.y = e.Y;

    //...
    Form::OnMouseDown(e);
}

void MainForm::OnMouseUp(const MouseEventArgs &e) {
    p2.x = e.X;
    p2.y = e.Y;

    if (rdoLine.Checked) {
        shapeVector.push_back(new Line(p1, p2));
    } else if (rdoRect.Checked) {
        int width = abs(p2.x - p1.x);
        int height = abs(p2.y - p1.y);
        shapeVector.push_back(new Rect(p1, width, height));
    }
    // �ı�
    else if (...) {
        //...
        shapeVector.push_back(circle);
    }

    //...
    this->Refresh();

    Form::OnMouseUp(e);
}

void MainForm::OnPaint(const PaintEventArgs &e) {
    // ���������״
    for (int i = 0; i < shapeVector.size(); i++) {
        shapeVector[i]->Draw(e.Graphics); // ��̬���ã���������
    }

    //...
    Form::OnPaint(e);
}
