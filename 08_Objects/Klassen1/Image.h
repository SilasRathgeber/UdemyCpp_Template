template <typename T>
class Image
{
public:
    //Konstruktoren
    Image();
    Image(const unsigned int &width, const unsigned int &height);

private:
    unsigned int m_width;
    unsigned int m_height;
};
