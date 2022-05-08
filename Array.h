#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

class Array
{
    //friend istream &operator>> (istream &, Array &); // ������������� �������� �����
    //friend ostream &operator<< (ostream &, const Array &); // ������������� �������� ������
private:
    int *ptr; // ��������� �� ������
    int Size; // ������ �������
public:
    Array(); // ����������� �� ���������
    Array(int ); // ����������� � �����������
    Array( const Array & ); // ����������� �����
    ~Array(); // �����������

    int getSize() ; // ���������� ���������� ��������� �������
    void setArray(); // ���������� �������
    void getArray(); // ����� �������
    const Array &operator= (const Array &); // �������� ������������
    bool operator== (const Array &) const; // �������� ���������
    int &operator[] (int );
    Array operator+ (const Array &);
    Array &operator+= (const int &); // �������� ���������� �������� � ����� �������
    Array &operator- (const int &); // �������� �������� �������� �� �����
    int search(const int ) const;
    void choicesSort(); // ���������� �������

};

#endif // ARRAY_H_INCLUDED
