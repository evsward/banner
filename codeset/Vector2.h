class Vector2 {// 头文件中只放置接口的描述声明，不写实现(相当于Java中的一个接口)
public: //公开的方法，通过方法与属性进行交互
    Vector2(int s);

    double &operator[](int i);

    int size();

private:
    double *elem;
    int sz;
};