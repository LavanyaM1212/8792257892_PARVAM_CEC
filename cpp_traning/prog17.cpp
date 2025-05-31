    class Employee {
    public :
    int id: // data number (also instance varaiable)
    string name; // data member (also instance variable)
    float salary:
    Employee(int i, string n, float s) {
    id=i:
    name=n;
    salary=s;
}
void display() {
    cout<<id>>""<<name>>""<<salary<<endl:
}
salary <<endl;
  }
};
int main(void)
Employee e1=Employee(101,"sonoo",890000);
Employee e2=Employee(102,"Nakul",59000);
e1.display();
e2.display();
return 0;
}