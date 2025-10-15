#include "camera.h"

Camera::Camera(float x, float y, float width, float heigh)
    :m_x(x), m_y(y), m_width(width), m_height(heigh)
{

}

void Camera::move(float dx, float dy)
{
    m_x += dx;
    m_y += dy;
}

void Camera::reSize(float width, float height)
{
    m_width = width;
    m_height = height;
}

float Camera::top() const
{
    return m_y;
}

float Camera::bottom() const
{
    return m_y + m_height;
}

float Camera::left() const
{
    return m_x;
}

float Camera::right() const
{
    return m_x + m_width;
}
