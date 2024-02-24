// Templates is Must for Competattive Programming

/*
class -> object
Template -> class
 |
 |
 v
(Parrameterized classes)

Why use templates?
-DRY rules
-Generic Programming--> we make a generic class so that we can pass any type of data types(int, float, double, char, string)

Syntax for Template
template <class T>
class Vector{
    T* arr;--- T can be int, float, char etc...
    Public:
        Vector(T* arr)
        {
            // Code
        }
        // & Many other methods
};

Competative Programming - Agar aap Template aur STL sikh liya then competative programming m alag hi edge h
Reason- STL k andar itne sare chize h aur Template k sath bohot time bachta h

iny main()
{
    -Vector<int> myVec(ptr);
    -Vector<float>myfvec(ptr);

    represent

}

class Vector{
    int *arr;
    int size;
    public:
    There can be many type of data types that we want to pass as parameters
    like VecInt, Vecfloat, VecDouble, VecChar are the data types
}
*/