class class_name{
    public:
    class_name(){

    }
}

Constructors are functions without return type which are called automatically when object of a class is called, to intitialise 
variables as that can only be done in a method(function) of class and not without it.

3 Types of constructors:

1. Default:
    syntax: class_name(){ // code 
            }
    Use: These are called when no special parameters are passed. like class_name object will call constructors
    Note: they are DEFAULT
2. Parameterised:
    When arguements(which are not type class_name) are passed while creating object
    syntax:
    class_name(int a, int b and other arguements){

    } 
    Use: class_name object(10,10);
3. Copy Constructors
    When arguements which are of same type class_name are passed while creating object
    syntax:
    class_name(class_name &some_other_object){

    } 
    Use: class_name object(10,10);//parameterised
        class_name object1(object);//parameterised