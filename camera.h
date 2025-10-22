#ifndef CAMERA_H
#define CAMERA_H

class Camera
{
public:
    Camera(float x, float y, float width, float heigh);

    void move(float dx, float dy);
    void moveTo(float x, float y);
    void reSize(float width, float height);

    float top() const;
    float bottom() const;
    float left() const;
    float right() const;
private:
    float m_x, m_y;
    float m_width, m_height;
};

#endif // CAMERA_H
