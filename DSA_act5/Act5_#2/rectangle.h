#ifndef RECTANGLE_H
#define RECTANGLE_H


class rectangle
{
    public:
        void setLength(int);
        void setWidth(int);
        int getLength();
        int getWidth();
        int area();
        int perimeter();

    protected:

    private:
        int length, width;
};

#endif // RECTANGLE_H
