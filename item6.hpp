class Necopiabil{
protected: 
    Necopiabil();
    ~Necopiabil();
private: 
    Necopiabil(const Necopiabil& other);
    Necopiabil& operator=(const Necopiabil);
};

class Necopiabil2{
public: 
    Necopiabil2();
    ~Necopiabil2();
private:
    Necopiabil2(const Necopiabil2& other);
    Necopiabil2& operator=(const Necopiabil2);
};

class Inherit1 : private Necopiabil{};

class Inherit2 : private Necopiabil{};